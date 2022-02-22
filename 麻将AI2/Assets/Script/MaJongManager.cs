using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.IO;

public class MaJongManager  {

    //int[] MahJong = new int[34];
    private static MaJongManager MJmanager;
    public static MaJongManager GetMJmanager()
    {
        if (MJmanager == null)
        {
            MJmanager = new MaJongManager();
            return MJmanager;
        }
        else return MJmanager;
    }
    

    List<int> MahjongsNum = new List<int>(34);
    List<Mahjong> mahjong = new List<Mahjong>(34); //顺序牌堆  //0-8万，9-17筒，18-26条，27-30风牌，31-33字牌，每种里面有四张
    List<Mahjong> Totalmahjong = new List<Mahjong>(34);
    Sprite[] Icon = new Sprite[35];

    public void MahJongInitialize()//
    {
        SetTileIcon();//设置图片icon
        MahjongsNum.Clear() ;
        mahjong.Clear() ;
        Totalmahjong.Clear();
        for (int i = 0; i < 34; i++)
        {
         
            MahjongsNum.Add(4);//所有麻将有4个
            //Debug.Log(MahjongsNum[i]);
            mahjong.Add(new Mahjong(i,Icon[i]));
            Totalmahjong.Add(new Mahjong(i, Icon[i]));
        }
        //SetTileIcon();//设置图片icon
    }
    public void SetTileIcon()//将对应图片设置进Icon里
    {
        for (int i = 0; i < 35; i++)
        {
            //picture.Add(search[i]);
            string k = i.ToString();
            Icon[i] =Resources.Load<Sprite>(k);
           
        }
    }

    public List<Mahjong> GetMahjongs()
    {
        return mahjong;
    }
    public List<Mahjong> GetTotalMahjongs()
    {
        return Totalmahjong;
    }
    public List<int> GetMahjongsNum()
    {
        return MahjongsNum;
    }
    public Mahjong GetMahjong(int num)
    {
        return mahjong[num];
    }
}
