using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;
public class BeginSetting : MonoBehaviour {

    MainCharacter hero;
    static GameObject panel;
   // static GameObject MonsterHPSlider;
    static Text Goldnum;//显示金钱组件
    static bool CheckCard = false;
    static int MonsterMaxHP;
    static int PlayerMaxAP;
    static int PlayerMaxHP;
    static GameObject MonsterHPBoard;
    static GameObject PlayerAPBoard;
    static GameObject PlayerHPBoard;
    static GameObject PlaterShieldBoard;
    static GameObject PlayerHandCards;
    static GameObject UseCardDesctiption;
    
    void Start () {//所有物体初始化
        hero = MainCharacter.GetMainCharacter();//初始化主角  
        MonsterHPBoard= UIManager.GetGameObject("MonsterHP");
        PlayerHPBoard = UIManager.GetGameObject("PlayerHP");
        PlayerAPBoard = UIManager.GetGameObject("PlayerAP");
        PlaterShieldBoard= UIManager.GetGameObject("PlayerShield"); 
        PlayerHandCards = UIManager.GetGameObject("PlayerHandCards"); 
        UseCardDesctiption = UIManager.GetGameObject("UseCardDes");
        Goldnum = GameObject.Find("GoldNum").GetComponent<Text>();
        panel = UIManager.GetGameObject("CardScroll");//找到显示牌的对象
        PlayerMaxAP = MainCharacter.GetMainCharacter().AP;
        PlayerMaxHP = MainCharacter.GetMainCharacter().HP;
        panel.SetActive(false);
        hero.StartSetting();//起始手牌   
        SetMaxPlayerHP();//起始血量
        SetMaxPlayerAP();
        SetPlayerShield();
        ShowGold();//起始金币
    }
    public static void MoveUseCardDes(bool isdown)
    {
        if (isdown)
            UseCardDesctiption.transform.DOMoveY(Screen.height-100,0.5f);
        else
            UseCardDesctiption.transform.DOMoveY(Screen.height + 100, 0.5f);
    }
    public static void SetUseCardDes(UseCard input,bool isright)
    {
        if(isright)
        {
            UseCardDesctiption.GetComponent<Text>().text = input.rightword;
        }
        else
        {
            UseCardDesctiption.GetComponent<Text>().text = input.leftword;
        }
       
    }
    public static void SetMaxPlayerHP()
    {
        PlayerHPBoard.GetComponent<Text>().text ="HP:"+ PlayerMaxHP.ToString()+"/"+ PlayerMaxHP.ToString();
    }
    public static void SetPlayerHP()
    {
        PlayerHPBoard.GetComponent<Text>().text = "HP:"+MainCharacter.GetMainCharacter().HP + "/" + PlayerMaxHP.ToString();
    }
    public static void SetPlayerShield()
    {
        PlaterShieldBoard.GetComponent<Text>().text = "Shield:"+MainCharacter.GetMainCharacter().Shield;
    }
    public static void SetMaxPlayerAP()
    {
        PlayerAPBoard.GetComponent<Text>().text = "AP:"+PlayerMaxAP.ToString() + "/" + PlayerMaxAP.ToString();
    }
    public static void SetPlayerAP()
    {
        PlayerAPBoard.GetComponent<Text>().text = "AP:" + MainCharacter.GetMainCharacter().AP + "/" + PlayerMaxAP.ToString();
    }
    public static void SetPlayerHandCardsNum(int num)
    {
        PlayerHandCards.GetComponent<Text>().text = "HandCards:"+num ;
    }
    public  void ShowMyCard()//显示所拥有牌组
    {
        if (CheckCard == false)
        {
            panel.SetActive(true);
            foreach (var a in MainCharacter.GetMainCharacter().CardsShowArray)
            {
                GameObject img = new GameObject(a.Key, typeof(Image));
                img.transform.SetParent(UIManager.GetGameObject("ShowCardPanel").transform);
                img.GetComponent<Image>().sprite = a.Value.NodePic;
                img.AddComponent<HoldToBig>();
            }
            MainCharacter.GetMainCharacter().CardsShowArray.Clear();
            CheckCard = true;
        }
        else
        {
            panel.SetActive(false);
            CheckCard = false;
        }


    }
    public static void SetMonsterStartHP(MonsterCard monster)
    {
        MonsterHPBoard.GetComponent<Text>().text = monster.Hp.ToString()+"/"+ monster.Hp.ToString();
        MonsterMaxHP = monster.Hp;
    }
    public static void SetMonsterHP(MonsterCard monster)
    {
        if (monster.Hp >0)
            MonsterHPBoard.GetComponent<Text>().text = monster.Hp.ToString() + "/" + MonsterMaxHP;
        else 
            MonsterHPBoard.GetComponent<Text>().text = "";
    }
    public static void ShowGold()//显示金钱数量
    {
        Goldnum.text = MainCharacter.GetMainCharacter().Money.ToString();
    }
    public static void SetMonsterStament(MonsterCard monster)
    {
        SetMonsterHP(monster);
    }
    public static void FlashGame()
    {
        ShowGold();
        SetPlayerHP();
        SetPlayerAP();
        SetPlayerShield();
        SetMonsterHP(MainCharacter.GetMainCharacter().Enemy);
    }
}
