using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MonsterManager
{
    //单例
    static MonsterManager monsterManager;
    public static MonsterManager GetmonsterManager()
    {
        if (monsterManager == null)
        {
            monsterManager = new MonsterManager();
            return monsterManager;
        }
        else
            return monsterManager;
    }
    MainCharacter hero = MainCharacter.GetMainCharacter();

   public static  Dictionary<string, MonsterCard> MonsterAssemble = new Dictionary<string, MonsterCard>
        {
            { "Goblin", new Gobulin(PicManager.GetPic("Goblin"), "野生的哥布林",  GobulinAttack) },
            { "Slime", new Slime(PicManager.GetPic("Slime"), "野生的史莱姆",  SlimeAttack) },
            { "Bastard", new Bastard(PicManager.GetPic("Bastard"), "盗贼团伙",BastardAttack) },
            { "Farmer", new Farmer(PicManager.GetPic("Farmer"), "弱不禁风的农夫", FarmerAttack) },
        };
    static void GobulinAttack()//哥布林的攻击方式
    {
        Attack(4);
        //   BeginSetting.SetPlayerHp();
    }
    static void SlimeAttack()//史莱姆的攻击方式
    {
        Attack(2);
        // BeginSetting.SetPlayerHp();
    }
    static void FarmerAttack()
    {
        Attack(3);
    }
    static void BastardAttack()
    {
        Attack(5);
    }

    static void Attack(int num)
    {
        if (num < MainCharacter.GetMainCharacter().Shield)
        {
            MainCharacter.GetMainCharacter().Shield -= num;
        }
        else if (num > MainCharacter.GetMainCharacter().Shield && MainCharacter.GetMainCharacter().Shield != 0)
        {
            MainCharacter.GetMainCharacter().HP -= (num - MainCharacter.GetMainCharacter().Shield);
            MainCharacter.GetMainCharacter().Shield = 0;
        }
        else
        {
            MainCharacter.GetMainCharacter().HP -= num;
        }
    }

}   
class Gobulin : MonsterCard
{
    public Gobulin(Sprite a, string discription,Action attackmethod) : base(a, discription, attackmethod)
    {
        Hp = 10;
    }
}

class Slime : MonsterCard
{
    public Slime(Sprite a, string discription, Action attackmethod) : base(a, discription, attackmethod)
    {
        Hp = 20;
    }
}


class Bastard : MonsterCard
{
    public Bastard(Sprite a, string discription, Action attackmethod) : base(a, discription, attackmethod)
    {
        Hp = 1;
      //  Shield = 5;
    }
}
class Farmer : MonsterCard
{
    public Farmer(Sprite a, string discription, Action attackmethod) : base(a, discription,attackmethod)
    {
        Hp = 12;
    }
}