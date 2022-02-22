#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// DG.Tweening.TweenParams
struct TweenParams_t2944325381;
// System.Object
struct Il2CppObject;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;
// DG.Tweening.EaseFunction
struct EaseFunction_t3306356708;
// DG.Tweening.TweenCallback
struct TweenCallback_t3697142134;
// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_t3418705418;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Nullable_1_gen512284379.h"
#include "DOTween_DG_Tweening_Ease2502520296.h"
#include "mscorlib_System_Nullable_1_gen339576247.h"
#include "UnityEngine_UnityEngine_AnimationCurve3306541151.h"
#include "DOTween_DG_Tweening_EaseFunction3306356708.h"
#include "DOTween_DG_Tweening_UpdateType3357224513.h"
#include "DOTween_DG_Tweening_TweenCallback3697142134.h"

// System.Void DG.Tweening.TweenParams::.ctor()
extern "C"  void TweenParams__ctor_m1421329190 (TweenParams_t2944325381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::Clear()
extern "C"  TweenParams_t2944325381 * TweenParams_Clear_m2352941651 (TweenParams_t2944325381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetAutoKill(System.Boolean)
extern "C"  TweenParams_t2944325381 * TweenParams_SetAutoKill_m3324818264 (TweenParams_t2944325381 * __this, bool ___autoKillOnCompletion0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetId(System.Object)
extern "C"  TweenParams_t2944325381 * TweenParams_SetId_m3936217499 (TweenParams_t2944325381 * __this, Il2CppObject * ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetTarget(System.Object)
extern "C"  TweenParams_t2944325381 * TweenParams_SetTarget_m587577735 (TweenParams_t2944325381 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetLoops(System.Int32,System.Nullable`1<DG.Tweening.LoopType>)
extern "C"  TweenParams_t2944325381 * TweenParams_SetLoops_m833753209 (TweenParams_t2944325381 * __this, int32_t ___loops0, Nullable_1_t512284379  ___loopType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetEase(DG.Tweening.Ease,System.Nullable`1<System.Single>,System.Nullable`1<System.Single>)
extern "C"  TweenParams_t2944325381 * TweenParams_SetEase_m249761156 (TweenParams_t2944325381 * __this, int32_t ___ease0, Nullable_1_t339576247  ___overshootOrAmplitude1, Nullable_1_t339576247  ___period2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetEase(UnityEngine.AnimationCurve)
extern "C"  TweenParams_t2944325381 * TweenParams_SetEase_m2156832318 (TweenParams_t2944325381 * __this, AnimationCurve_t3306541151 * ___animCurve0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetEase(DG.Tweening.EaseFunction)
extern "C"  TweenParams_t2944325381 * TweenParams_SetEase_m50101784 (TweenParams_t2944325381 * __this, EaseFunction_t3306356708 * ___customEase0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetRecyclable(System.Boolean)
extern "C"  TweenParams_t2944325381 * TweenParams_SetRecyclable_m4113181667 (TweenParams_t2944325381 * __this, bool ___recyclable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetUpdate(System.Boolean)
extern "C"  TweenParams_t2944325381 * TweenParams_SetUpdate_m4207667294 (TweenParams_t2944325381 * __this, bool ___isIndependentUpdate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetUpdate(DG.Tweening.UpdateType,System.Boolean)
extern "C"  TweenParams_t2944325381 * TweenParams_SetUpdate_m161821801 (TweenParams_t2944325381 * __this, int32_t ___updateType0, bool ___isIndependentUpdate1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::OnStart(DG.Tweening.TweenCallback)
extern "C"  TweenParams_t2944325381 * TweenParams_OnStart_m3718574137 (TweenParams_t2944325381 * __this, TweenCallback_t3697142134 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::OnPlay(DG.Tweening.TweenCallback)
extern "C"  TweenParams_t2944325381 * TweenParams_OnPlay_m1710613197 (TweenParams_t2944325381 * __this, TweenCallback_t3697142134 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::OnRewind(DG.Tweening.TweenCallback)
extern "C"  TweenParams_t2944325381 * TweenParams_OnRewind_m2137198170 (TweenParams_t2944325381 * __this, TweenCallback_t3697142134 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::OnUpdate(DG.Tweening.TweenCallback)
extern "C"  TweenParams_t2944325381 * TweenParams_OnUpdate_m57491400 (TweenParams_t2944325381 * __this, TweenCallback_t3697142134 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::OnStepComplete(DG.Tweening.TweenCallback)
extern "C"  TweenParams_t2944325381 * TweenParams_OnStepComplete_m418530464 (TweenParams_t2944325381 * __this, TweenCallback_t3697142134 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::OnComplete(DG.Tweening.TweenCallback)
extern "C"  TweenParams_t2944325381 * TweenParams_OnComplete_m4145462530 (TweenParams_t2944325381 * __this, TweenCallback_t3697142134 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::OnKill(DG.Tweening.TweenCallback)
extern "C"  TweenParams_t2944325381 * TweenParams_OnKill_m1111014851 (TweenParams_t2944325381 * __this, TweenCallback_t3697142134 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::OnWaypointChange(DG.Tweening.TweenCallback`1<System.Int32>)
extern "C"  TweenParams_t2944325381 * TweenParams_OnWaypointChange_m224661718 (TweenParams_t2944325381 * __this, TweenCallback_1_t3418705418 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetDelay(System.Single)
extern "C"  TweenParams_t2944325381 * TweenParams_SetDelay_m443284532 (TweenParams_t2944325381 * __this, float ___delay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetRelative(System.Boolean)
extern "C"  TweenParams_t2944325381 * TweenParams_SetRelative_m2325101835 (TweenParams_t2944325381 * __this, bool ___isRelative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetSpeedBased(System.Boolean)
extern "C"  TweenParams_t2944325381 * TweenParams_SetSpeedBased_m2851973033 (TweenParams_t2944325381 * __this, bool ___isSpeedBased0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.TweenParams::.cctor()
extern "C"  void TweenParams__cctor_m1144029957 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
