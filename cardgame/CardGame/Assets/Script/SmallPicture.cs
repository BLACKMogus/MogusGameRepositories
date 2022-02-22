using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using DG.Tweening;
public class SmallPicture : MonoBehaviour, IBeginDragHandler, IDragHandler, IEndDragHandler
{

    public static int Multiple=1;
    //public  bool heroturn;
    Vector3 downpoint;//图片下方一点，图片绕点旋转
    Vector2 ButtonDownposition;//按下鼠标时候的坐标
    Image ThisPic;//这个物体上的图片
    public static UseCard ThisUseCard;//这个物体所处的当前场景卡
  // UseCard[] CopyCards;//拷贝整个牌组
   
    public static List<UseCard> CopyCardsList;

    //UseCard[] HandCards;//手牌
    public static int HandCardsNum;//手牌数量
    int SelectCardIndex;//手排索引
    public static bool IsInsert=false;
    public static List<UseCard> ThisTurnCard;
    public static List<UseCard> DeadCard; 
    MainCharacter hero;
    Text leftword;//左边功能描述
    Text rightword;//右边功能描述
    MonsterCard AttackMonster;
    public void Start()
    {

        // hero = MainCharacter.GetMainCharacter();
        // HandCards =hero.get
        leftword = UIManager.GetGameObject("leftdescription").GetComponent<Text>();
        rightword = UIManager.GetGameObject("rightdescription").GetComponent<Text>();
        downpoint = new Vector3(this.gameObject.transform.position.x, this.gameObject.transform.position.y - 5000, this.gameObject.transform.position.z);//绕图片下方点旋转                                                                                                                                          
        ThisPic = this.GetComponent<Image>();
        hero = MainCharacter.GetMainCharacter();
        HandCardsNum = hero.HandCardNum;
        ThisTurnCard = new List<UseCard>();
        DeadCard = new List<UseCard>();
    }

    //洗牌算法
    public void Shuffle()
    {
        int q;
        //费雪耶兹置乱算法  
        //每次生成的随机交换位置:
        for (q= CopyCardsList.Count-1; q> 0;q--)
        {
            //随机数生成器，范围[0, i]  

            int rand = Random.Range(0, q+1);
            UseCard temp = CopyCardsList[q];
            CopyCardsList[q] = CopyCardsList[rand];
            CopyCardsList[rand] = temp;
           
        }
        

    }

    public void StartBattle(MonsterCard monster)
    {
        //  CopyCards = hero.GetAllHeroCards();
        CopyCardsList = hero.GetAllHeroCards();
        Shuffle();
        SelectCardIndex = 1;
        AttackMonster = monster;
        ThisUseCard = CopyCardsList[0];
        ThisPic.sprite = ThisUseCard.NodePic;
        BeginSetting.SetPlayerHandCardsNum(HandCardsNum);
    }

    public void OnBeginDrag(PointerEventData eventData)
    {
        Debug.Log(ThisUseCard.NodePic.name);
        ButtonDownposition = eventData.position;
     
    }

    public void OnDrag(PointerEventData eventData)
    {

            if (eventData.delta.x > 0)//往右
            {
                this.gameObject.transform.RotateAround(downpoint, new Vector3(0, 0, -1), 1f * eventData.delta.x / 100);
            BeginSetting.MoveUseCardDes(true);
            BeginSetting.SetUseCardDes(ThisUseCard, true);

            }
            if (eventData.delta.x < 0)//往左
            { this.gameObject.transform.RotateAround(downpoint, new Vector3(0, 0, -1), 1f * eventData.delta.x / 100);
            BeginSetting.MoveUseCardDes(true);
            BeginSetting.SetUseCardDes(ThisUseCard,false);
        }
    }

    //public static List<UseCard> TurnCard()
    //{
    //    return ThisTurnCard;
    //}
    // end dragging
    public void OnEndDrag(PointerEventData eventData)
    {
        
    
            HandCardsNum--;
            
           if (eventData.position.x < ButtonDownposition.x && (eventData.position.x - ButtonDownposition.x) < -150)//向左滑动
            {
            if (MainCharacter.GetMainCharacter().AP + ThisUseCard.LeftUseAP()  >= 0)
            {
                Debug.Log("←效果" + ThisUseCard.LeftUseAP());
                MoveCard(true);

            }
            else
            {
                BeginSetting.MoveUseCardDes(false);
                this.gameObject.transform.rotation = Quaternion.identity;
                this.gameObject.transform.localPosition = new Vector3(0, 0, 0);
            }

             }
            else  if (eventData.position.x > ButtonDownposition.x && (eventData.position.x - ButtonDownposition.x) > 150)//向右滑动
        {
            if (MainCharacter.GetMainCharacter().AP + ThisUseCard.RightUseAP() >= 0)
            {
                Debug.Log("→效果" + ThisUseCard.RightUseAP() );
                MoveCard(false);
            }

            else
            {
                BeginSetting.MoveUseCardDes(false);
                this.gameObject.transform.rotation = Quaternion.identity;
                this.gameObject.transform.localPosition = new Vector3(0, 0, 0);
            }



        }
        else
        {
            BeginSetting.MoveUseCardDes(false);
            this.gameObject.transform.rotation = Quaternion.identity;
            this.gameObject.transform.localPosition = new Vector3(0, 0, 0);
        }
      
        //为了保持回归原位效果，切牌要放在协程
    }

    void MoveCard(bool Direction)
    {
        ThisTurnCard.Add(ThisUseCard);
        if (Direction==true)//向左打牌
        {
            StartCoroutine(MoveLeft());
            if (ThisUseCard.NodeType==Node.CardCatalog.UseCard)
            {
                ThisUseCard.StartLeftFunction();
            }
        
            if (ThisUseCard.useCardType!=UseCard.UseCardType.Weapon)
            {
           
                DeadCard.Add(ThisUseCard);
            }
           
        }
        else
        {
            StartCoroutine(MoveRight());//向右打牌
            if (ThisUseCard.NodeType == Node.CardCatalog.UseCard)
            {
                ThisUseCard.StartRightFunction();
            }
            DeadCard.Add(ThisUseCard);
        }
       
    }
    IEnumerator MoveLeft()
    {

        float i = 0.5f;
        while (i > 0)
        {
            this.gameObject.transform.RotateAround(downpoint, new Vector3(0, 0, 1), Time.deltaTime * 200);
            i -= Time.deltaTime;
            yield return new WaitForFixedUpdate();
        }
        BeginSetting.MoveUseCardDes(false);
        this.gameObject.transform.rotation = Quaternion.identity;
        this.gameObject.transform.localPosition = new Vector3(0, 0, 0);
        Node lastnode = ThisUseCard;
        if (IsInsert == true)
        {

            IsInsert = false;
        }
        else
        {
                if (SelectCardIndex < CopyCardsList.Count)
                {
                    ThisUseCard = CopyCardsList[SelectCardIndex];
                    ThisPic.sprite = ThisUseCard.NodePic;
                    SelectCardIndex++;
                }
                else if (SelectCardIndex >= CopyCardsList.Count)
                {
                    SelectCardIndex = 0;
                    Shuffle();
                    DeadCard.Clear();
                    ThisUseCard = CopyCardsList[SelectCardIndex];
                    SelectCardIndex++;
                }
         }

        lastnode.SetNodeNull();
        BeginSetting.FlashGame();
        BeginSetting.SetPlayerHandCardsNum(HandCardsNum);
        if (MainCharacter.GetMainCharacter().Enemy.Hp > 0)//如果怪没死
        {
            if (HandCardsNum != 0)
            {
                UIManager.GetGameObject("MyCards").GetComponent<CardB2F>().SmallOnButtonClickRotateCard();
            }
            else
            {
                MonsterTurn();
                BeginSetting.FlashGame();
                StartTurn();
            }
        }
        else
        {
            BeginSetting.FlashGame();
            BattleOver();
        }
    }
    IEnumerator MoveRight()
    {

        float i = 0.5f;
        while (i > 0)
        {
            this.gameObject.transform.RotateAround(downpoint, new Vector3(0, 0, -1), Time.deltaTime * 200);
            i -= Time.deltaTime;
            yield return new WaitForFixedUpdate();
        }
        BeginSetting.MoveUseCardDes(false);
        this.gameObject.transform.rotation = Quaternion.identity;
        this.gameObject.transform.localPosition = new Vector3(0, 0, 0);
        Node lastnode = ThisUseCard;
        if (IsInsert == true)
        {
            IsInsert = false;
        }
        else
        {
            if (SelectCardIndex < CopyCardsList.Count)
            {
                ThisUseCard = CopyCardsList[SelectCardIndex];
                ThisPic.sprite = ThisUseCard.NodePic;
                SelectCardIndex++;
            }
            else if (SelectCardIndex >= CopyCardsList.Count)
            {
                SelectCardIndex = 0;
                Shuffle();
                DeadCard.Clear();
                ThisUseCard = CopyCardsList[SelectCardIndex];
                SelectCardIndex++;
            }
        }
        lastnode.SetNodeNull();
        BeginSetting.FlashGame();
        BeginSetting.SetPlayerHandCardsNum(HandCardsNum);
        if (MainCharacter.GetMainCharacter().Enemy.Hp > 0)//如果怪没死
        {
            if (HandCardsNum != 0)
            {
                UIManager.GetGameObject("MyCards").GetComponent<CardB2F>().SmallOnButtonClickRotateCard();
            }
            else
            {
                MonsterTurn();  
                BeginSetting.FlashGame();
                StartTurn();
            }
        }
        else
        {
            BeginSetting.FlashGame();
            BattleOver();
        }
    }

    void StartTurn()
    {

     HandCardsNum = 5;
        BeginSetting.SetPlayerHandCardsNum(HandCardsNum);
        Debug.Log("everturnnum"+MainCharacter.GetMainCharacter().UseWeapon.Count);
        if (MainCharacter.GetMainCharacter().UseWeapon.Count!=0)
        {
            foreach (var a in MainCharacter.GetMainCharacter().UseWeapon)
            {
                Debug.Log("everturn");
                a.AddEveryTurnValue();
            }
        }

        ThisTurnCard.Clear();
        UIManager.GetGameObject("MyCards").GetComponent<CardB2F>().SmallOnButtonClickRotateCard();
    }
    void MonsterTurn()
    {
        if (!AttackMonster.isfaint)
        { AttackMonster.StartAttack(); } 
        else
        {
            Debug.Log("怪物陷入了眩晕");
          
        }
    }

    void BattleOver()
    {
        HandCardsNum = 5;//重置手牌
        DeadCard.Clear();//清空墓地
        ThisTurnCard.Clear();//
        UIManager.GetGameObject("CardFront").GetComponent<MainPictureFrame>().BattleOver();

    }
}
