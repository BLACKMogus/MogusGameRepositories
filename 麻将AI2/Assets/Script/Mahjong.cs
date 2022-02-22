using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class Mahjong {
    public enum Type
    {
        Wan,
        Tong,
        Tiao,
        Feng,
        Zi,
    }
    public int num;
    public Sprite icon;
    public GameObject newtile;//= (GameObject)Resources.Load("Prfb/HandTile")

    public int SelfValue = 0;
    public int WaitTailNum;
    public int TotalValue=0;
    public string tail;
    public Type TailType;
    public Mahjong ()
        {
        }
    public Mahjong(int i)
    {
        num = i;
        newtile = (GameObject)Resources.Load("Prfb/HandTile");
        if (num >= 0 && num <= 8)
        {
            tail = num + 1 + "万";
            TailType = Type.Wan;
        }
        if (num > 8 && num <= 17)
        {
            tail = (num - 8) + "筒";
            TailType = Type.Tong;
        }
        if (num > 17 && num <= 26)
        {
            tail = (num - 17) + "条";
            TailType = Type.Tiao;
        }
        if (num > 26 && num <= 30)
        {
            //tail = (num - 26) + "风";
            switch ((num - 26))
            {
                case 1: tail = "东风"; break;
                case 2: tail = "南风"; break;
                case 3: tail = "西风"; break;
                case 4: tail = "北风"; break;
            }
            TailType = Type.Feng;
        }
        if (num > 30 && num <= 33)
        {
            //tail = (num - 30) + "字";
            switch ((num - 30))
            {
                case 1: tail = "白牌"; break;
                case 2: tail = "发牌"; break;
                case 3: tail = "中牌"; break;

            }
            TailType = Type.Zi;
        }
    }
    public Mahjong(int i, Sprite j)
    {
        num = i;
        icon = j;
        newtile = (GameObject)Resources.Load("Prfb/HandTile");
        if (num >= 0 && num <= 8)
        {
            tail = num + 1 + "万";
            TailType = Type.Wan;
        }
        if (num > 8 && num <= 17)
        {
            tail = (num - 8) + "筒";
            TailType = Type.Tong;
        }
        if (num > 17 && num <= 26)
        {
            tail = (num - 17) + "条";
            TailType = Type.Tiao;
        }
        if (num > 26 && num <= 30)
        {
            //tail = (num - 26) + "风";
            switch ((num - 26))
            {
                case 1: tail = "东风"; break;
                case 2: tail = "南风"; break;
                case 3: tail = "西风"; break;
                case 4: tail = "北风"; break;
            }
            TailType = Type.Feng;
        }
        if (num > 30 && num <= 33)
        {
            //tail = (num - 30) + "字";
            switch ((num - 30))
            {
                case 1: tail = "白牌"; break;
                case 2: tail = "发牌"; break;
                case 3: tail = "中牌"; break;

            }
            TailType = Type.Zi;
        }
    }
    public Mahjong(Mahjong input)
    {
        num = input.num;
        icon = input.icon;
        //SelfValue = input.SelfValue;
        //WaitTailNum = input.WaitTailNum;
        //TotalValue = input.TotalValue;
        //Debug.Log("1111111111111");
        //newtile = (GameObject)Resources.Load("Prfb/HandTile");
         //Debug.Log("22222222222222222");
        if (num >= 0 && num <= 8)
        {
            tail = num + 1 + "万";
            TailType = Type.Wan;
        }
        if (num > 8 && num <= 17)
        {
            tail = (num - 8) + "筒";
            TailType = Type.Tong;
        }
        if (num > 17 && num <= 26)
        {
            tail = (num - 17) + "条";
            TailType = Type.Tiao;
        }
        if (num > 26 && num <= 30)
        {
            //tail = (num - 26) + "风";
            switch((num - 26))
            {
                case 1:tail = "东风";break;
                case 2: tail = "南风"; break;
                case 3: tail = "西风"; break;
                case 4: tail = "北风"; break;
            }
            TailType = Type.Feng;
        }
        if (num > 30 && num <= 33)
        {
            //tail = (num - 30) + "字";
            switch ((num - 30))
            {
                case 1: tail = "白牌"; break;
                case 2: tail = "发牌"; break;
                case 3: tail = "中牌"; break;
             
            }
            TailType = Type.Zi;
        }
    }
    public void SetWaitTailNum()
    {
        if(tail.Substring(0,1)=="1" || tail.Substring(0, 1) == "9")
        {
            WaitTailNum = 11;
        }
        else if (tail.Substring(0, 1) == "2" || tail.Substring(0, 1) == "8")
        {
            WaitTailNum = 15;
        }
        else if (TailType!=Type.Zi && TailType != Type.Feng)
        {
            WaitTailNum = 19;
        }
        else if (TailType == Type.Zi || TailType == Type.Feng)
        {
            WaitTailNum = 10;
        }
    }
    public void SetValueZero()
    {
        SelfValue = 0;
        TotalValue = 0;
    }
}
