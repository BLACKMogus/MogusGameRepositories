using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class MainCharacter{
    static MainCharacter DemoHero;
    public static MainCharacter GetMainCharacter()
    {
        if (DemoHero == null)
        {
            DemoHero = new MainCharacter();
            return DemoHero;
        }
        else
            return DemoHero;
    }
    Dictionary<string, UseCard> CardsArray = new Dictionary<string, UseCard> {//起始牌组
            //{ "AD1",new UseCard(UseCardManager.GetusecardManager().GetAllCards()["AD1"])},
            //{ "AD2",new UseCard(UseCardManager.GetusecardManager().GetAllCards()["AD2"]) },
            //{ "AD3",new UseCard(UseCardManager.GetusecardManager().GetAllCards()["AD3"])},
            { "AD1.1",UseCardManager.ADCardAssemble["AD1"]},
            { "AD1.2",UseCardManager.ADCardAssemble["AD1"]},
            { "AD1.3",UseCardManager.ADCardAssemble["AD1"]},
            { "AD3",UseCardManager.ADCardAssemble["AD3"]},
            { "AP1.1", UseCardManager.APCardAssemble["AP1"] },
             { "AP1.2", UseCardManager.APCardAssemble["AP1"] },
             { "AP1.3", UseCardManager.APCardAssemble["AP1"] },
             { "MageHand", UseCardManager.APCardAssemble["MageHand"] },
             //{ "Meditation", UseCardManager.APCardAssemble["Meditation"] },
             { "Shield", UseCardManager.WeaponCardAssemble["Shield"] },

             //{ "MageHand1", UseCardManager.APCardAssemble["MageHand"]},
             //{ "MageHand2", UseCardManager.APCardAssemble["MageHand"] },
             //  { "Shield1", UseCardManager.WeaponCardAssemble["Shield"] },
             //    { "Shield2", UseCardManager.WeaponCardAssemble["Shield"] },
    };
    public MonsterCard Enemy;
    public int MaxHP = 15;
    public int HP=15;
    public int MaxAP = 5;
    public int AP=5;
    public int Shield=0;
    public int Money=10;
    public int CardsNum;//牌组卡牌数
    public int HandCardNum=5;//手牌数
    public List<EveryTurnCard> UseWeapon;
    public void StartTurn()
    {
       // UseWeapon = new List<EveryTurnCard>();
    }

    public Dictionary<string, UseCard> CardsShowArray = new Dictionary<string, UseCard>();//玩家牌组显示板
    public void StartSetting()
    {

        CardsShowArray = CardsArray;
        CardsNum = CardsArray.Count;
        UseWeapon = new List<EveryTurnCard>();
        // Debug.Log(StartCardNum + "..." + CardNum);
    }
    //卡牌----------------------------
    int i = 0;
    public void AddCard(UseCard getcard)
    {
        //加牌
        //foreach (var a in DemoHero.CardsArray)
        //{
        //    Debug.Log("intarray "+a.Key);
        //}
        if (DemoHero.CardsArray.ContainsKey(getcard.NodePic.name))
        {
            Debug.Log("有卡了");
            DemoHero.CardsArray.Add(getcard.NodePic.name + i, getcard);
            DemoHero.CardsShowArray.Add(getcard.NodePic.name + i, getcard);
            i++;
            CardsNum++;
        }
        else
        {

            Debug.Log(getcard.NodePic.name + "还没卡");
            // CardsArray.Add("33333222", getcard);
            DemoHero.CardsArray.Add(getcard.NodePic.name+"", getcard);
         //   DemoHero.CardsShowArray.Add(getcard.NodePic.name, getcard);
        }


    }
    public void RemoveCard(UseCard removecard)
    {
        DemoHero.CardsArray.Remove(removecard.NodePic.name);
        CardsNum--;
    }

    public List<UseCard> GetAllHeroCards()
    {
        List<UseCard> returncard=new List<UseCard>();
        foreach (var a in CardsArray)
        {
            returncard.Add(a.Value);
        }
        return returncard;
    }

    //public UseCard[] GetAllHeroCards()
    //{
    //    UseCard[] b = new UseCard[CardsNum];
    //    int k = 0;
    //    foreach (var a in CardsArray)
    //    {
    //     //   Debug.Log(a.Value);
    //        b[k] = a.Value;
    //        k++;
    //    }     
    //    return b;
    //}
    //public void Shuffle(int start,int end)
    //{
    //    int i;
    //    //费雪耶兹置乱算法  
    //    //每次生成的随机交换位置:
    //    for (i = GetAllHeroCards().Length; i > 0; i--)
    //    {
    //        //随机数生成器，范围[0, i]  

    //        int rand = Random.Range(0, i);
    //        UseCard temp = Cards[i];
    //        Cards[i] = Cards[rand];
    //        Cards[rand] = temp;
    //    }


    //}
    //public void StartBattle()//战斗开始初始化
    //{
    //    Cards = GetAllHeroCards();
    //    Shuffle(0,GetAllHeroCards().Length);//全洗牌
    //    HandCardIndex = HandCard;//重置手排索引
    //}


  //  List<UseCard>

}
