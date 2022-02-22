using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PicManager
    {
    static PicManager picManager = new PicManager();
        public static PicManager GetpicManager()
        {
            if (picManager == null)
            {
                picManager = new PicManager();
                return picManager;
            }
            else
                return picManager;
        }
        string Card = "Picture/Card/";
        public string GetPicPath(string name)//获取图片路径
        {
            switch (name)
            {
            case "CardBack": return "Picture/Card/CardBack";
            //SceneCard
            case "MeetVillage": return "Picture/Scene/Village/MeetVillage";
            case "VillageThree1": return "Picture/Scene/Village/VillageThree1";
            //people
            case "MeetMerchant": return "Picture/Scene/People/MeetMerchant";
            case "MeetBastard": return "Picture/Scene/Village/MeetBastard";
            //MonsterCard
            case "Goblin": return Card+"MonsterCard/Goblin";
            case "Slime": return Card+ "MonsterCard/Slime";
            case "Farmer": return Card + "MonsterCard/Farmer";
            case "Bastard": return Card + "MonsterCard/Bastard";
            //UseCard
            //ADCard
            case "AD1": return Card + "UseCard/ADCard/AD1";
            case "AD2": return Card + "UseCard/ADCard/AD2";
            case "AD3": return Card + "UseCard/ADCard/AD3";
            //APCard
            case "AP1": return Card + "UseCard/APCard/AP1";
            case "Meteor": return Card + "UseCard/APCard/Meteor";
            case "MageHand": return Card + "UseCard/APCard/MageHand";
            case "MageShield": return Card + "UseCard/APCard/MageShield"; 
            case "Meditation": return Card + "UseCard/APCard/Meditation";
            //WeaponCard
            case "Shield": return Card + "UseCard/Weapon/Shield";
            case "Sword1": return Card + "UseCard/Weapon/Sword1";
            case "Sword2": return Card + "UseCard/Weapon/Sword2";
            case "Sword3": return Card + "UseCard/Weapon/Sword3";
            case "Sword0": return Card + "UseCard/Weapon/Sword0";
            case "Wand0": return Card + "UseCard/Weapon/Wand0";
            case "Wand1": return Card + "UseCard/Weapon/Wand1";
            //ItemCard
            case "HPWater": return Card + "UseCard/Item/HPWater";
            case "MPWater": return Card + "UseCard/Item/Sword0";
            //EffectCard
            case "AddGold":return "Picture/Effect/AddGold";
  
            default: break;
            }
            return null;
        }
        public static Sprite GetPic(string name)//获取图片
        {
            string obj = picManager.GetPicPath(name);
            Sprite a = Resources.Load<Sprite>(obj);
            return a;
        }

    }

