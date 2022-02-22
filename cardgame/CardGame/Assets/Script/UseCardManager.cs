using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UseCardManager : MonoBehaviour {

    static UseCardManager usecardManager;
    public static UseCardManager GetusecardManager()
    {
        if (usecardManager == null)
        {
            usecardManager = new UseCardManager();
            return usecardManager;
        }
        else
            return usecardManager;
    }
    public static Dictionary<string, ADCard> ADCardAssemble = new Dictionary<string, ADCard>
        {
         { "AD1", new ADCard(PicManager.GetPic("AD1"),"普通攻击", "回复2AP","造成2点伤害",UseCard.CardColor.None,1,
              new Action<EffectDATA>[]{ EffectManager.ChangeAP},
              new EffectDATA[]{ new EffectDATA {ToMyselfAp=2} },
              new Action<EffectDATA>[]{ EffectManager.CreateDamage },
              new EffectDATA[]{ new EffectDATA { ToEnemyDamage = 2} }
              )
         },
        { "AD2", new ADCard(PicManager.GetPic("AD2"),"物理牌", "左描述ad","右描述ad",UseCard.CardColor.None,1,
              new Action<EffectDATA>[]{ EffectManager.CreateDamage },
              new EffectDATA[]{ new EffectDATA {ToEnemyDamage=2,IsPenetrate=true } },
              new Action<EffectDATA>[]{ EffectManager.CreateDamage },
              new EffectDATA[]{ new EffectDATA { ToEnemyDamage = 4} }
              )

        },
          { "AD3", new ADCard(PicManager.GetPic("AD3"),"熟练攻击", "回复2AP","，回合种每打出一次普通攻击造成2点伤害，消耗4AP",UseCard.CardColor.None,1,
              new Action<EffectDATA>[]{ EffectManager.ChangeAP },
              new EffectDATA[]{ new EffectDATA {ToMyselfAp=2} },
              new Action<EffectDATA>[]{ EffectManager.SearchTurnCardAttack, EffectManager.ChangeAP },
            //  new EffectDATA[]{ new EffectDATA { SearchCard=new UseCard("AD1")},{new EffectDATA {  ToEnemyDamage = 2, ToMyselfAp = -4  } } }
            new EffectDATA[]{ new EffectDATA { ToEnemyDamage = 2, OperateCard = new UseCard("AD1"),SearchMethod="Name" }  ,new EffectDATA { ToMyselfAp = -4 }, })
               }

        };
    public static Dictionary<string, APCard> APCardAssemble = new Dictionary<string, APCard>
        {
           {
            "AP1", new APCard( PicManager.GetPic("AP1"),"法术飞弹", "回复2AP","造成2点伤害，消耗1AP",UseCard.CardColor.None,1,
              new Action<EffectDATA>[]{ EffectManager.ChangeAP},
              new EffectDATA[]{ new EffectDATA {ToMyselfAp=2} },
              new Action<EffectDATA>[]{ EffectManager.CreateDamage,EffectManager.ChangeAP },
              new EffectDATA[]{ new EffectDATA { ToEnemyDamage = 2}, new EffectDATA { ToMyselfAp = -1 } }
          )},
            { "Meteor", new APCard( PicManager.GetPic("Meteor"),"魔法牌", "左描述ap","右描述ap",UseCard.CardColor.None,1,
              new Action<EffectDATA>[]{ EffectManager.ChangeAP},
              new EffectDATA[]{ new EffectDATA {ToMyselfAp=4} },
              new Action<EffectDATA>[]{ EffectManager.SearchTurnCardAttack,EffectManager.ChangeAP},
              new EffectDATA[]{ new EffectDATA { CardColor=UseCard.CardColor.Star, ToEnemyDamage = 2}, new EffectDATA { ToMyselfAp = -4 } }
           ) },

            { "MageHand", new APCard( PicManager.GetPic("MageHand"),"法师之手", "抽取2张牌，消耗2AP","从墓地中抽取一张装备牌，消耗2AP",UseCard.CardColor.None,1,
              new Action<EffectDATA>[]{ EffectManager.DrawCards,EffectManager.ChangeAP},
              new EffectDATA[]{ new EffectDATA {DrawCardNum=2}, new EffectDATA { ToMyselfAp=-2 } },
              new Action<EffectDATA>[]{ EffectManager.SearchDeadCardInsert,EffectManager.ChangeAP },
              new EffectDATA[]{ new EffectDATA { SearchMethod="Weapon"}, new EffectDATA { ToMyselfAp = -2 } }
                ) },

            { "Meditation", new APCard( PicManager.GetPic("Meditation"),"魔法牌", "左描述ap","右描述ap",UseCard.CardColor.None,1,
              new Action<EffectDATA>[]{EffectManager.ChangeAP},
              new EffectDATA[]{ new EffectDATA { ToMyselfAp=4 } },
              new Action<EffectDATA>[]{ EffectManager.SetMultiple},
              new EffectDATA[]{ new EffectDATA { Multiple=2 } }
                ) },

            //{ "MageShield", new APCard( PicManager.GetpicManager().GetPic("MageShield"),"魔法牌", "左描述ap","右描述ap",UseCard.CardColor.None,1,
            //  new Action<EffectDATA>[]{ EffectManager.GetEventAction("ChangeShield"),EffectManager.GetEventAction("ChangeAP")},
            //  new EffectDATA[]{ new EffectDATA {ToMyselfShield=4 }, new EffectDATA { ToMyselfAp=-1 } },
            //  new Action<EffectDATA>[]{ EffectManager.GetEventAction("SearchDeadCardInsert"),EffectManager.GetEventAction("ChangeAP") },
            //  new EffectDATA[]{ new EffectDATA { SearchMethod="Weapon"}, new EffectDATA { ToMyselfAp = -2 } }
            //    ) },

        };


    public static Dictionary<string, WeaponCard> WeaponCardAssemble = new Dictionary<string, WeaponCard>
        {
            { "Shield", new WeaponCard(PicManager.GetPic("Shield"),"盾牌", "装备盾牌,加3点装甲,消耗1AP","盾牌飞击,造成2点伤害并眩晕,消耗3AP",UseCard.CardColor.None,1,
              new Action<EffectDATA>[]{ EffectManager.UseWeapon,EffectManager.ChangeAP},
              new EffectDATA[]{ new EffectDATA {EveryTurnCard=new EveryTurnCard(new Dictionary<string, int> { { "Shield", 2 } })  }, new EffectDATA { ToMyselfAp=-1 } },
              new Action<EffectDATA>[]{ EffectManager.ThrowWeapon,EffectManager.ChangeAP,EffectManager.AddFaint },
              new EffectDATA[]{ new EffectDATA { ToEnemyDamage=2}, new EffectDATA { ToMyselfAp = -3 }, new EffectDATA { ToEnemy=true } }
                  ) },

            { "Sword0", new WeaponCard(PicManager.GetPic("Sword0"),"武器牌", "左描述W","右描述W",UseCard.CardColor.None,1) },
            { "Sword1", new WeaponCard(PicManager.GetPic("Sword1"),"武器牌", "左描述W","右描述W",UseCard.CardColor.None,1) },
            { "Sword2", new WeaponCard(PicManager.GetPic("Sword2"),"武器牌", "左描述W","右描述W",UseCard.CardColor.None,1) },
            { "Sword3", new WeaponCard(PicManager.GetPic("Sword3"),"武器牌", "左描述W","右描述W",UseCard.CardColor.None,1) },
            { "Wand0", new WeaponCard(PicManager.GetPic("Wand0"),"法杖", "装备法杖,魔法伤害加2点,消耗1AP","能量汲取,回复4AP",UseCard.CardColor.None,1,
              new Action<EffectDATA>[]{ EffectManager.UseWeapon,EffectManager.ChangeAP},
              new EffectDATA[]{ new EffectDATA {EveryTurnCard=new EveryTurnCard(new Dictionary<string, int> { { "Attack", 2 } })  }, new EffectDATA { ToMyselfAp=-1 } },
              new Action<EffectDATA>[]{ EffectManager.ChangeAP },
              new EffectDATA[]{ new EffectDATA { ToMyselfAp=4} }
                  ) },
            { "Wand1", new WeaponCard(PicManager.GetPic("Wand1"),"武器牌", "左描述W","右描述W",UseCard.CardColor.None,1) },
    };
    public static Dictionary<string, ItemCard> ItemCardAssemble = new Dictionary<string, ItemCard>
        {
            { "HPWater", new ItemCard(PicManager.GetPic("MPWater"),"道具牌", "左描述T","右描述T",UseCard.CardColor.None,1) },
            { "MPWater", new ItemCard(PicManager.GetPic("MPWater"),"道具牌", "左描述T","右描述T",UseCard.CardColor.None,1) },
        };


    public Dictionary<string, APCard> GetApCardAssemble()
{
      
        return APCardAssemble;
    }
    public Dictionary<string, ADCard> GetAdCardAssemble()
    {

        return ADCardAssemble;
    }
    public Dictionary<string, WeaponCard> GetWeaponCardAssemble()
    {
      
        return WeaponCardAssemble;
    }
    public Dictionary<string, ItemCard> GetItemCardAssemble()
    {
      
        return ItemCardAssemble;
    }
    //public Dictionary<string, UseCard> GetAllCards()
    //{
    //    Dictionary<string, UseCard> AllCards = new Dictionary<string, UseCard>();
    //    foreach (var a in ApCardAssemble)
    //    {
    //        AllCards.Add(a.Key,a.Value);
    //    }
    //    foreach (var a in AdCardAssemble)
    //    {
    //        AllCards.Add(a.Key, a.Value);
    //    }
    //    foreach (var a in WeaponCardAssemble)
    //    {
    //        AllCards.Add(a.Key, a.Value);
    //    }
    //    foreach (var a in ItemCardAssemble)
    //    {
    //        AllCards.Add(a.Key, a.Value);
    //    }
    //    return AllCards;
    //}

}


public class APCard : UseCard
{
   
    public APCard(Sprite a, string description, string left, string right, CardColor CardColor,
    int cardNum, Action<EffectDATA>[] leftaction, EffectDATA[] leftdata, Action<EffectDATA>[] rightaction, EffectDATA[] rightdata)
        : base(a, description, left, right, CardColor, cardNum, leftaction, leftdata, rightaction, rightdata)
    {
        useCardType = UseCardType.APCard;
    }
    public APCard(Sprite a, string description, string left, string right, CardColor CardColor,
   int cardNum) : base(a, description, left, right, CardColor, cardNum) {
        useCardType = UseCardType.APCard;
    }

}
public class ADCard : UseCard
{
   
    public ADCard(Sprite a, string description, string left, string right, CardColor CardColor,
    int cardNum, Action<EffectDATA>[] leftaction, EffectDATA[] leftdata, Action<EffectDATA>[] rightaction, EffectDATA[] rightdata)
        : base(a, description, left, right, CardColor, cardNum, leftaction, leftdata, rightaction, rightdata)
    {
        useCardType = UseCardType.ADCard;
    }
    public ADCard(Sprite a, string description, string left, string right, CardColor CardColor,
    int cardNum) : base(a, description, left, right, CardColor, cardNum) {
        useCardType = UseCardType.ADCard;
    }
}
public class WeaponCard : UseCard
{
   
    public WeaponCard()
    {

    }
 
    public WeaponCard(Sprite a, string description, string left, string right, CardColor CardColor,
    int cardNum, Action<EffectDATA>[] leftaction, EffectDATA[] leftdata, Action<EffectDATA>[] rightaction, EffectDATA[] rightdata)
        : base(a, description, left, right, CardColor, cardNum, leftaction, leftdata, rightaction, rightdata)
    {
        useCardType = UseCardType.Weapon;
    }
    public WeaponCard(Sprite a, string description, string left, string right, CardColor CardColor,
int cardNum) : base(a, description, left, right, CardColor, cardNum) {
        useCardType = UseCardType.Weapon;
    }
    }
public class ItemCard : UseCard
{
    public ItemCard(Sprite a, string description, string left, string right, CardColor CardColor,
    int cardNum, Action<EffectDATA>[] leftaction, EffectDATA[] leftdata, Action<EffectDATA>[] rightaction, EffectDATA[] rightdata)
        : base(a, description, left, right, CardColor, cardNum, leftaction, leftdata, rightaction, rightdata)
    {
        useCardType = UseCardType.Item;
    }
    public ItemCard(Sprite a, string description, string left, string right, CardColor CardColor,
int cardNum) : base(a, description, left, right, CardColor, cardNum) { useCardType = UseCardType.Item; }
}

