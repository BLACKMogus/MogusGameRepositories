using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class EffectManager {
    //Dictionary<string, EffectCard> EffectCardAssemble = new Dictionary<string, EffectCard>
    //    {//有序事件，带Stament
    //        { "AddGold", new EffectCard(PicManager.GetpicManager().GetPic("AddGold"), "找到宝箱，获得金币",
    //        new Action< int> []{ GetEventAction("AddGold",parameter) },new int[]{parameter})}
    //    };

    //public EffectCard GetEffectCard(string name)
    //{
    //    return new EffectCard(EffectCardAssemble[name], AddGold, 2);
    //}
    //public EffectCard GetEffectCard(string name, int parameter)//这个是直接给生成的效果卡传参数，做不到多个效果
    //{
    //    Dictionary<string, EffectCard> EffectCardAssemble = new Dictionary<string, EffectCard>
    //    {//有序事件，带Stament
    //        { "AddGold", new EffectCard(PicManager.GetpicManager().GetPic("AddGold"), "找到宝箱，获得金币",
    //        new Action< int> []{ GetEventAction("AddGold",parameter) },new int[]{parameter})}
    //    };
    //    //EffectCardAssemble[name].IntFunction[0] = GetEventAction("AddGold",parameter);
    //    return EffectCardAssemble[name];
    //}
    static EffectManager effectManager;
    public static EffectManager GetEffectManager()
    {
        if (effectManager == null)
        {
            effectManager = new EffectManager();
            return effectManager;
        }
        else return effectManager;

    }
    public EffectCard GetEffectCard(string name)
    {
        Dictionary<string, EffectCard> EffectCardAssemble = new Dictionary<string, EffectCard>
            {//有序事件，带Stament
                { "AddGold", new EffectCard(PicManager.GetPic("AddGold"), "找到宝箱，获得金币" )}
            };
        return EffectCardAssemble[name];
    }
    //public static void SetEffect(Node head,Action<EffectDATA> method, EffectDATA effectDATA)
    //{ 
    //    EffectCard A = (EffectCard)head;
    //    A.SetEffect(method, effectDATA);
    //}//可能要写进node里面才行
    //public static Action<EffectDATA> GetEventAction(string name)
    //{

    //    Dictionary<string, Action<EffectDATA>> GetEvent = new Dictionary<string, Action<EffectDATA>>
    // {
    //     {"AddGold",AddGold},
    //     {"CreateDamage",CreateDamage },
    //     {"SearchTurnCardAttack",SearchTurnCardAttack },
    //     {"SearchTurnCardAsName",SearchTurnCardAsName },
    //    {"SearchTurnCardAsColor",SearchTurnCardAsColor },
    //    {"DrawCards",DrawCards },
    //    {"InsertCards", InsertCards},
    //    {"ChangeShield",ChangeShield },
    //    {"SearchDeadCardInsert",SearchDeadCardInsert },



    //    //{"", },
    //    //{"", },
    //    //{"", },
    //    //{"", },
    //    //{"", },
    //    //{"", },
    //    //{"", },
    //    //{"", },

    //     {"ChangeAP",ChangeAP },
    //     {"ChangeHP",ChangeHP },

    //  };
    //    return GetEvent[name];
    //}

    //宝箱效果
    public static void AddGold(EffectDATA effect)//加金钱效果
    {

        MainCharacter.GetMainCharacter().Money += effect.MoneyNum;
       BeginSetting.ShowGold();//刷新金钱数
                                                    //  return null;

    }
    public static void AddCards(EffectDATA effect)//加金钱效果
    {
        MainCharacter.GetMainCharacter().AddCard(effect.OperateCard);
    }
    //public static void AddCard(EffectDATA effect)
    //{
    //    MainCharacter.GetMainCharacter().AddCard(effect.OperateCard);
    //}
    //道具效果
    //攻击效果
    public static void CreateDamage(EffectDATA effectDATA)//造成伤害,(是否穿透护甲)
    {
        //穿刺攻击
        if (effectDATA.IsPenetrate)
        {
            PenetrateAttack(effectDATA);
        }
        else
        {
            CommonAttack(effectDATA);
        }
      
    }
    static void PenetrateAttack(EffectDATA effectDATA)
    {
        MainCharacter.GetMainCharacter().Enemy.Hp -= effectDATA.ToEnemyDamage;
    }
    static void CommonAttack(EffectDATA effectDATA)
    {
        if (effectDATA.ToEnemyDamage < MainCharacter.GetMainCharacter().Enemy.Shield)
        {
            MainCharacter.GetMainCharacter().Enemy.Shield -= effectDATA.ToEnemyDamage;
        }
        else if (effectDATA.ToEnemyDamage > MainCharacter.GetMainCharacter().Enemy.Shield && MainCharacter.GetMainCharacter().Enemy.Shield != 0)
        {
            MainCharacter.GetMainCharacter().Enemy.Hp -= (effectDATA.ToEnemyDamage - MainCharacter.GetMainCharacter().Enemy.Shield);
            MainCharacter.GetMainCharacter().Enemy.Shield = 0;
        }
        else
        {
            MainCharacter.GetMainCharacter().Enemy.Hp -= effectDATA.ToEnemyDamage;
        }
    }

    public static void ChangeShield(EffectDATA effectDATA)
    {
        MainCharacter.GetMainCharacter().Shield += effectDATA.ToMyselfShield;
    }
    public static void SearchTurnCardAsName(EffectDATA effectDATA)//检索本回合出过的卡名
    {
        int n = 0;
        foreach(var a in SmallPicture.ThisTurnCard)
        {
            Debug.Log("搜索中"+ effectDATA.OperateCard.NodePic.name);
            if(a.NodePic.name==effectDATA.OperateCard.NodePic.name)
            {
                n++;
            }
        }
        effectDATA.SearchNum = n;
    }
    public static void SearchTurnCardAsColor(EffectDATA effectDATA)//检索本回合出过的花色
    {
        int n = 0;
        foreach (var a in SmallPicture.ThisTurnCard)
        {
            if (a.cardColor == effectDATA.OperateCard.cardColor)
            {
                n++;
            }
        }
        effectDATA.SearchNum = n;
    }
    public static void SearchDeadCardInsert(EffectDATA effectDATA)//检索墓地牌加入牌
    {
        List<UseCard> SearchCard = new List<UseCard>();
     if(SmallPicture.DeadCard.Count>0)
        {
            foreach (var a in SmallPicture.DeadCard)
            {
                if (effectDATA.SearchMethod == "Weapon" && a.useCardType == UseCard.UseCardType.Weapon)
                {
                    SearchCard.Add(a);
                }
                else if (effectDATA.SearchMethod == "Item" && a.useCardType == UseCard.UseCardType.Item)
                {
                    SearchCard.Add(a);
                }
                else if (effectDATA.SearchMethod == "ADCard" && a.useCardType == UseCard.UseCardType.ADCard)
                {
                    SearchCard.Add(a);
                }
                else if (effectDATA.SearchMethod == "APCard" && a.useCardType == UseCard.UseCardType.APCard)
                {
                    SearchCard.Add(a);
                }
            }
            if (SearchCard.Count!=0)
            {
               // Debug.Log("搜索到了" + SearchCard[0].NodePic.name);
                UseCard special = SearchCard[(int)UnityEngine.Random.Range(0, SearchCard.Count)];
                effectDATA.OperateCard = special;
                InsertCards(effectDATA);
               // Debug.Log("搜索到了" + special.NodePic.name);
            }
            else
            { }
          //  Debug.Log("搜索为空");
        }
    else
        { }
      //  Debug.Log("墓地为空");

    }
    public static void SearchTurnCardAttack(EffectDATA effectDATA)//根据检索回合卡名数量攻击
    {
        if (effectDATA.SearchMethod == "Name")
        {
            SearchTurnCardAsName(effectDATA);
        }
        if (effectDATA.SearchMethod == "Color")
        {
            SearchTurnCardAsColor(effectDATA);
        }
        MainCharacter.GetMainCharacter().Enemy.Hp -= (effectDATA.SearchNum*effectDATA.ToEnemyDamage);
    }
    public static void DrawCards(EffectDATA effectDATA)
    {
        SmallPicture.HandCardsNum += effectDATA.DrawCardNum; 
        //刷新卡牌数显示
    }
    public static void InsertCards(EffectDATA effectDATA)
    {
        SmallPicture.IsInsert = true;
        SmallPicture.ThisUseCard = effectDATA.OperateCard;
        Debug.Log("墓地抽卡");
        Debug.Log(effectDATA.OperateCard.NodePic.name);
        SmallPicture.HandCardsNum++;
        SmallPicture.DeadCard.Remove(effectDATA.OperateCard);
    }
    public static void UseWeapon(EffectDATA effectDATA)
    {
        MainCharacter.GetMainCharacter().UseWeapon.Add(effectDATA.EveryTurnCard);
        RemoveCard(effectDATA);
    }
    public static void ThrowWeapon(EffectDATA effectDATA)
    {
        CreateDamage(effectDATA);
        RemoveCard(effectDATA);
    }
    public static void AddFaint(EffectDATA effectDATA)//之后改为AddSpecialStament
    {
        if(effectDATA.ToEnemy)
        {
            MainCharacter.GetMainCharacter().Enemy.isfaint=true;
        }
    }
    public static void SetMultiple(EffectDATA effectDATA)
    {
        SmallPicture.Multiple *= effectDATA.Multiple;
    }
    public static void RemoveCard(EffectDATA effectDATA)
    {
        SmallPicture.CopyCardsList.Remove(effectDATA.OperateCard);
    }
    public static void AddCard(EffectDATA effectDATA)
    {
        SmallPicture.CopyCardsList.Add(effectDATA.OperateCard);
    }
    public static void ChangeAP(EffectDATA effectDATA)//回复AP
    {
        MainCharacter.GetMainCharacter().AP += effectDATA.ToMyselfAp;
    }
    public static void ChangeHP(EffectDATA effectDATA)//回复HP
    {
        MainCharacter.GetMainCharacter().HP += effectDATA.ToMyselfAp;
    }
    public static void GetThing()
    {

    //    public Action<MonsterCard, int> qq = new Action<MonsterCard, int>(AddGold)
    //{
    //    {

        //    }
        //}
      //  GetEffect("Add2Gold").Func = new GetEffect("Add2Gold").Func(Add2Gold(2));
    }
    //技能效果
    //回复类
    public void AddMagic(MonsterCard Enemy, int num)
    {
        Enemy.Hp -= num;

    }
    //伤害类
    public void CreateDamage(MonsterCard Enemy,int num)
    {
        Enemy.Hp-= num;
    }

}
