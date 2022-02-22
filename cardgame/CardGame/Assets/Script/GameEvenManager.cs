using System;
using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using UnityEngine;

public class GameEvenManager : MonoBehaviour {
    GameEvent gameEvent;
    VillageEvent villageEvent;
    static GameEvenManager gameEvenManger;
    public static GameEvenManager GetGameEvent()
    {
        if (gameEvenManger == null)
        {
            gameEvenManger = new GameEvenManager();
            gameEvenManger.villageEvent = new VillageEvent();
            return gameEvenManger;
        }
        else
            return gameEvenManger;
    }
    public Node GetEvent()
    {
        return villageEvent.RandomVillageEvent();
    }

}
public class GameEvent
{

}
public class VillageEvent:GameEvent
{

    static Node Scene1()//调试effect系统
    {

        Node nodeA = MeetPeopleCard.MeetPeopleCardAssemble["MeetMerchant"];
        UseCard nodeA0 =UseCardManager.WeaponCardAssemble["Sword0"];
        nodeA0.value = 10;
        UseCard nodeA00 = UseCardManager.WeaponCardAssemble["Sword1"];
        nodeA00.value = 8;
        UseCard nodeA000 = UseCardManager.WeaponCardAssemble["Sword2"];
        nodeA000.value = 5;
        nodeA.leftscene = nodeA0;
        nodeA0.leftscene = nodeA00;
        nodeA0.rightscene = nodeA00;
        nodeA00.leftscene = nodeA000;
        nodeA00.rightscene = nodeA000;

        return nodeA;


    }

    static Node Scene2()//调试战斗系统遇村庄
    {
       
        Node nodeA = VillageCard.SceneAssemble["MeetVillage"];
        Node nodeA0 = new MeetPeopleCard(PicManager.GetPic("MeetBastard"), "遇到山贼在侵略这里", "帮助村民", "帮助山贼");
        Node nodeA00 = MonsterManager.MonsterAssemble["Bastard"];
        Node nodeA01 = MonsterManager.MonsterAssemble["Farmer"];
        EffectCard nodeA00X = EffectManager.GetEffectManager().GetEffectCard("AddGold");
        nodeA00X.SetEffect(EffectManager.AddGold, new EffectDATA() { MoneyNum = 10 });
        //    Node node5 = UseCardManager.WeaponCardAssemble["Wand0"];
        EffectCard node5 = new EffectCard(UseCardManager.WeaponCardAssemble["Wand0"].NodePic, "获得" + UseCardManager.WeaponCardAssemble["Wand0"].Description);
        node5.SetEffect(EffectManager.AddCards,new EffectDATA() { OperateCard = UseCardManager.WeaponCardAssemble["Wand0"] }); 
        nodeA.leftscene = nodeA0;
        nodeA0.leftscene = nodeA00;
        nodeA0.rightscene = nodeA01;
        nodeA01.leftscene = nodeA00X;
        nodeA01.rightscene = nodeA00X;
        nodeA00.leftscene = node5;
        nodeA00.rightscene = node5;
        return nodeA;
        //GameEvent.GetGameEvent().Gift = new Card[4]//随机奖励
        //{

        //   CardManager.GetCardManager().WeaponCard["Weapon"],
        //    CardManager.GetCardManager().WeaponCard["Weapon"],
        //    CardManager.GetCardManager().ItemCard["Item"],
        //    CardManager.GetCardManager().ItemCard["Item"]
        //};

       

    }
    static Node Scene3()//调试UseCard系统
    {
    

        return VillageCard.SceneAssemble["VillageOne2"];

    }
    public static List<Func<Node>> Village = new List<Func<Node>>()
    {
        Scene1,Scene2,Scene3

    };
    public Node RandomVillageEvent()
    {
        int i=1;
       // i--;
        return Village[i]();
    }

}

