using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public struct EffectDATA
{
    public EffectDATA(int a, int b, int c)
    {
        CardColor= UseCard.CardColor.None;
        EveryTurnCard = new EveryTurnCard();
        ToEnemy = true;
        ToEnemyDamage = 0;
        ToMyselfAp = 0;
        ToMyselfHp = 0;
        ToMyselfShield = 0;
        MoneyNum = 0;
        CemeteryCardNum = 0;
        OperateCard = null;
        SearchNum = 0;
        IsPenetrate = false;
        DrawCardNum = 0;
        SearchMethod = "";
        Stament = "";
        Multiple = 1;
    }
    public UseCard.CardColor CardColor;
    public int Multiple;
    public string Stament;//附加的异常状态
    public bool ToEnemy;//是否对敌人
    public int ToEnemyDamage;//给敌人的数值
    public int ToMyselfAp;//给自己AP的数值
    public int ToMyselfHp;//给自己HP的数值
    public int ToMyselfShield;//给自己盾的数值
    public int MoneyNum;//给自己金钱的数值
    public EveryTurnCard EveryTurnCard ;
    public int DrawCardNum;//抽牌数
    public int CemeteryCardNum;//墓地卡的数值
   // public int DamageMultiple;//伤害倍数
    public UseCard OperateCard;//检索的那张卡
    public string SearchMethod;
    public int SearchNum;//检索到的数字
    public bool IsPenetrate;//是否穿透伤害
}
public class Node{

    //AllCard
    public Node()
    {
    }
    public enum CardCatalog
    {
        None,
        SceneCard,
        MonsterCard,
        EffectCard,
        UseCard

    }
    public CardCatalog NodeType;
    public Sprite NodePic;//卡牌图片
    public string Description;//卡牌描述
    public string leftword;//向左选的指示
    public string rightword;//向右选的指示
    public Node leftscene;//左结点
    public Node rightscene;//右结点
    public void SetNodeNull()
    {
        leftscene = null;
        rightscene = null;
    }
    //SceneCard
    //UseCard
    //MonsterCard
    //EffectCard

   
}
public class SceneCard:Node
{
    public enum DifferentPlace
    {
        GetThing,
        Monster,
        Moutain,
        Village

    }
    public enum Stament
    {
        one,
        two,
        three,
        four
    }
    public DifferentPlace Sceneplace;
    public Stament SceneStament;

    public SceneCard(Sprite a, string description, string left, string right, Stament c ) 
    {
            NodeType = CardCatalog.SceneCard;
            NodePic = a;
            Description = description;
            leftword = left;
            rightword = right;
            SceneStament = c;
    }
    public SceneCard(Sprite a, string description, string left, string right)
    {
        NodeType = CardCatalog.SceneCard;
        NodePic = a;
        Description = description;
        leftword = left;
        rightword = right;

    }
}
public class UseCard : Node
{
    //public UseCard(Sprite a, string description, string left, string right, CardColor cardColor, int cardNum):base(a,description,left,right,cardColor,cardNum)
    //{
    //    NodeType = CardCatalog.UseCard;
    //}
    public enum CardColor
    {
        None,
        Sun,
        Moon,
        Star,
        Cloud

    }
    public enum UseCardType
    {
        None,
        ADCard,
        APCard,
        Weapon,
        Item
    }


    public CardColor cardColor;//花色
    public int CardNum;//数字
    public Action<EffectDATA>[] LeftFunction;
    public EffectDATA[] LeftData;
    public Action<EffectDATA>[] RightFunction;
    public EffectDATA[] RightData;
    public int value;
   // public int UseAP;
    public UseCardType useCardType;
    public void StartLeftFunction()
    {

     
        for (int i = 0; i < LeftFunction.Length; i++)
        {
            if(LeftData[i].ToEnemyDamage!=0)
            {
                LeftData[i].ToEnemyDamage *= SmallPicture.Multiple;
                SmallPicture.Multiple = 1;
            }
            LeftFunction[i](LeftData[i]);
        }
        BeginSetting.SetMonsterStament(MainCharacter.GetMainCharacter().Enemy);
    }
    public void StartRightFunction()
    {

        for (int i=0;i<RightFunction.Length;i++)
        {
            if (RightData[i].ToEnemyDamage != 0)
            {
                RightData[i].ToEnemyDamage *= SmallPicture.Multiple;
                SmallPicture.Multiple = 1;
            }
            RightFunction[i](RightData[i]);
        }
        BeginSetting.SetMonsterHP(MainCharacter.GetMainCharacter().Enemy);
    }
    //构造函数
    public UseCard()
    {

    }
    public UseCard(Sprite a, string description, string left, string right, CardColor CardColor,
int cardNum, Action<EffectDATA>[] leftaction, EffectDATA[] leftdata, Action<EffectDATA>[] rightaction, EffectDATA[] rightdata)
    {
        NodeType = CardCatalog.UseCard;
        NodePic = a;
        Description = description;
        leftword = left;
        rightword = right;
        cardColor = CardColor;
        CardNum = cardNum;
        LeftFunction = leftaction;
        RightFunction = rightaction;
        LeftData = leftdata;
        RightData = rightdata;

    }
    public UseCard(Sprite a, string description, string left, string right, CardColor CardColor,
 int cardNum)
    {
        NodeType = CardCatalog.UseCard;
        NodePic = a;
        Description = description;
        leftword = left;
        rightword = right;
        cardColor = CardColor;
        CardNum = cardNum;

    }
   public int LeftUseAP()
    {
        int assumption=0;
        for (int i = 0; i < LeftFunction.Length; i++)
        {
            if (LeftData[i].ToMyselfAp < 0)
            {
                assumption += LeftData[i].ToMyselfAp;
            }
        }
        return assumption;
    }
    public int RightUseAP()
    {
        int assumption = 0;
        for (int i = 0; i < RightFunction.Length; i++)
        {
            if (RightData[i].ToMyselfAp < 0)
            {
                assumption += RightData[i].ToMyselfAp;
            }
        }
        return assumption;
    }
    public UseCard(UseCard a)
    {
          NodeType = CardCatalog.UseCard;
        NodePic = a.NodePic;
        Description = a.Description;
        leftword = a.leftword;
        rightword = a.rightword;
        cardColor = a.cardColor;
        CardNum = a.CardNum;
    }
    public UseCard(CardColor cardColor)
    {
        this.cardColor = cardColor;
    }
    public UseCard(int num)
    {
        CardNum = num; 
    }
    public UseCard(string a)
    {

        NodePic = PicManager.GetPic(a);
    }
}
public class MonsterCard : Node
{
    public int Hp;
    public int Attack;
    public int Shield;
    public bool isfaint;
    public Action AttackMethod;
    public void StartAttack()
    {
        AttackMethod();
    }


    public MonsterCard(Sprite a, string description,Action attackmethod) 
    {
            NodeType = CardCatalog.MonsterCard ;
            NodePic = a;
            Description = description;
            AttackMethod = attackmethod;

    }
    
    //public MonsterCard(MonsterCard a)
    //{
    //    NodePic = a.NodePic;
    //    Hp = a.Hp;
    //    Shield = a.Shield;
    //    AttackMethod = a.AttackMethod;
    //}
    //public MonsterCard(Sprite a) 
    //{
    //    NodePic = a;
    //    NodeType = CardCatalog.MonsterCard;
    //}
}
public class EveryTurnCard
{
    public int TurnHP = 0;
    public int TurnAP = 0;
    public int TurnAttack = 0;
    public int TurnShield = 0;
    public int TurnDamage = 0;
    public void AddEveryTurnValue()
    {
        AddHP();
        AddAP();
        AddShield();

        BeginSetting.FlashGame();
    }
    void AddHP()
    {
        if (MainCharacter.GetMainCharacter().HP + TurnHP > MainCharacter.GetMainCharacter().MaxHP)
        {
            MainCharacter.GetMainCharacter().HP = MainCharacter.GetMainCharacter().MaxHP;
        }
        else
            MainCharacter.GetMainCharacter().HP += TurnHP;
    }
    void AddAP()
    {
        if (MainCharacter.GetMainCharacter().AP + TurnAP > MainCharacter.GetMainCharacter().MaxAP)
        {
            MainCharacter.GetMainCharacter().AP = MainCharacter.GetMainCharacter().MaxAP;
        }
        else
            MainCharacter.GetMainCharacter().AP += TurnAP;
    }
    void AddShield()
    {

            MainCharacter.GetMainCharacter().Shield += TurnShield;
    }
    public EveryTurnCard()
    {

    }
    public EveryTurnCard(Dictionary<string,int> num)
    {
        foreach(var a in num)
        {
            if (a.Key == "HP"){TurnHP +=a.Value;}
            if (a.Key == "AP"){TurnHP += a.Value;}
            if (a.Key == "Attack") { TurnAttack += a.Value; }
            if (a.Key == "Shield") { TurnShield += a.Value; }
            if (a.Key == "Damage") { TurnDamage += a.Value; }
        }
    
    }
}
public class EffectCard : Node
{
   // public List<int> Num=new List<int>();
    public List<EffectDATA> Num=new List<EffectDATA>();
    public List<Action<EffectDATA>> Function=new List<Action<EffectDATA>>();
    public void SetEffect( Action<EffectDATA> method, EffectDATA effectnum)
    {

        Function.Add(method);
        Num.Add(effectnum);
    }
    public void StartEffect()
    {
        int n = 0;
        foreach (var a in Function)
        {
            a(Num[n]);
            n++;
        }
    }

        //=-==========================================
    public int[] paramater;
    //public Dictionary<int, Action<int>> Function = new Dictionary<int, Action<int>>();
    //public void SetEffect(int num,Action<int> method)
    //{
    //    Function.Add(num, method);
       
    //}
    public EffectCard(Sprite a, string description)
    {
        NodePic = a;
        Description = description;
        NodeType = CardCatalog.EffectCard;
    }

    //public void StartEffect()
    //{

    //foreach(var a in Function)
    //    {
    //        a.Value(a.Key);
    //    }
    //}
}

