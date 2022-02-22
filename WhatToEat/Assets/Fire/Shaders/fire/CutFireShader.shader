Shader "Mine/CutFireShader"
{
    Properties
    {
        _MainTex ("Texture", 2D) = "white" {}
        _noiseTex("noiseTex",2D) = "white"{}
        _bottomMask ("bottomMask", 2D)="white"{}
        _colorGridentTex("colorGridentMap", 2D) = "white"{}
        _displaceStrength("displaceStrength", Range(0,1)) = 0.1
        _time0("time0",FLOAT) = 0
        _colorScale("colorScale", Range(0,2)) = 1
        _alphaScale("alpha", Range(0,2)) = 1
        
        _Size ("Size", Range(0.0, 100)) = 40
    }
    SubShader {
        Tags{"RenderType" = "Transparent" "Queue" = "Transparent"}
        LOD 100
        blend one oneMinusSrcAlpha
        zwrite off
        ztest on
        Pass
        {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            
            #include "UnityCG.cginc"
            struct appdata {
                float4 vertex : POSITION;
                float2 uv : TEXCOORD0;
            };
            struct v2f {
                float2 uv : TEXCOORD0;
                float4 vertex : SV_POSITION;
            };
            sampler2D _MainTex;
            float4 _MainTex_ST;
            sampler2D _noiseTex;
            float _displaceStrength;
            sampler2D _bottomMask;
            sampler2D _colorGridentTex;
            float _time0;
            float _colorScale;
            float _alphaScale;
            float _Size;
            v2f vert (appdata v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv = TRANSFORM_TEX(v.uv, _MainTex);
                return o;
            }
            fixed4 frag (v2f i) : SV_Target
            {
                i.uv.x = i.uv.x - frac(i.uv.x * _Size) / _Size;
                i.uv.y = i.uv.y - frac(i.uv.y * _Size) / _Size;
                
                //线性插值参数
                float2 bottomMask_topMask = tex2D(_bottomMask, i.uv).r;
                float bottomMask = bottomMask_topMask;
                
                //噪声干扰shape 的uv
                float2 noiseUV = i.uv;
                noiseUV.y *= 0.6;
                noiseUV.y -= _Time.y * 0.8 + _time0;
                float noise = tex2D(_noiseTex, noiseUV).r;
                noise -= 0.5;
                
                //摇曳控制参数 - 控制变化在范围之内
                float discontinueMask = tex2D(_noiseTex, i.uv).r;
                discontinueMask = lerp(discontinueMask, 0, bottomMask);
                
                //在主纹理中采样火焰轮廓
                fixed4 shapeColor = tex2D(_MainTex, float2(i.uv.x + noise * discontinueMask ,i.uv.y));
                //fixed4 shapeColor = tex2D(_MainTex, float2(i.uv.x ,i.uv.y));
                
                //绘制静态火焰
                float grayScale = 0.3 * shapeColor.r + 0.6 * shapeColor.g + 0.1 * shapeColor.b;
                
                //根据灰度值采样色彩纹理
                float4 finalColor = tex2D(_colorGridentTex, float2(grayScale, i.uv.y));
                
                finalColor = finalColor * 1.5 * _colorScale;
                // 1.5 8 0.6 这些参数是shader调试过程中的临时变量，用来控制外部变量的印象权重
                finalColor.a = saturate(grayScale * 8) * 0.6 * _alphaScale; 
                finalColor.rgb *= finalColor.a;
                
                return finalColor;
            }
            ENDCG
        }
    }
}
