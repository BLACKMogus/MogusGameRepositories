using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using DG.Tweening;
public class MainPictureFrame : MonoBehaviour, IBeginDragHandler, IDragHandler, IEndDragHandler
{

    Vector3 downpoint;//图片下方一点，图片绕点旋转
    Vector2 ButtonDownposition;//按下鼠标时候的坐标
    Image ThisPic;//这个物体上的图片
    public Node ThisScene;//这个物体所处的当前场景卡
    Text leftword;//左边描述
    Text rightword;//右边描述
    Text description;//卡牌文字描述
    //--------------
    bool isfight = false;//是否战斗
   // GameObject Hp;
    GameObject CardBack;
    GameObject leftdcpt;
    GameObject rightdcpt;
    GameObject Dcpt;
    GameObject MyCards;
    Transform cardback;
    Transform cardfront;
    MonsterCard AttackMonster;
    //------------------
    public void Start()
    {
        leftword = UIManager.GetGameObject("LeftDescription").GetComponent<Text>();
        rightword = UIManager.GetGameObject("RightDescription").GetComponent<Text>();
        description = UIManager.GetGameObject("Description").GetComponent<Text>();
        downpoint = new Vector3(this.gameObject.transform.position.x, this.gameObject.transform.position.y - 5000, this.gameObject.transform.position.z);//绕图片下方点旋转                                                                                                                                          
        ThisPic = this.GetComponent<Image>();
        //-----------
       // Hp = UIManager.GetGameObject("CharacterHP");
        CardBack = UIManager.GetGameObject("CardBack");
        leftdcpt = UIManager.GetGameObject("LeftDescription");
        rightdcpt = UIManager.GetGameObject("RightDescription");
        Dcpt = UIManager.GetGameObject("Description");
        MyCards = UIManager.GetGameObject("MyCards");
        cardback = MyCards.transform.Find("MyCardBack");
        cardfront = MyCards.transform.Find("MyCardFront");
        //-----------------

    }
    //public static Node GetThisScene()
    //{
    //    return ThisScene;
    //}
    void ShowMessage()//显示文字的速度
    {
        Invoke("Synchronization", 0.3f);
    }
    void HideMessage()//隐藏所有文字
    {
        leftword.text = "";
        rightword.text = "";
        description.text = "";
    }

    void Synchronization()
    {
        leftword.text = ThisScene.leftword;
        rightword.text = ThisScene.rightword;
        description.text = ThisScene.Description;
    }

    public void ClickButton()
    {

        ThisScene = GameEvenManager.GetGameEvent().GetEvent();
        ThisPic.sprite = ThisScene.NodePic ;
        ShowMessage();
    }
    public void OnBeginDrag(PointerEventData eventData)
    {
        if(!isfight)
        {
            ButtonDownposition = eventData.position;
        }
        
 
    }
    public void OnDrag(PointerEventData eventData)
    {
        
    if(!isfight)
        {
            if (eventData.delta.x > 0)//往右
            {
                this.gameObject.transform.RotateAround(downpoint, new Vector3(0, 0, -1), 1f * eventData.delta.x / 100);
            }
            if (eventData.delta.x < 0)//往左
            { this.gameObject.transform.RotateAround(downpoint, new Vector3(0, 0, -1), 1f * eventData.delta.x / 100); }


        }
    }
    //public void RotateAroundd(Vector3 center, Vector3 axis, float angle)
    //{
    //    //绕axis轴旋转angle角度
    //    Quaternion rotation = Quaternion.AngleAxis(angle, axis);
    //    //旋转之前,以center为起点,transform.position当前物体位置为终点的向量.
    //    Vector3 beforeVector = transform.position - center;
    //    //四元数 * 向量(不能调换位置, 否则发生编译错误)
    //    Vector3 afterVector = rotation * beforeVector;//旋转后的向量
    //    //向量的终点 = 向量的起点 + 向量
    //    transform.position = afterVector + center;
    //}
    public void OnEndDrag(PointerEventData eventData)
    {
        if (!isfight)
        {
              if (eventData.position.x < ButtonDownposition.x && (eventData.position.x - ButtonDownposition.x) < -150)
            {
                if (ThisScene.NodeType == Node.CardCatalog.EffectCard)//如果是效果卡往左便发动效果
                {
                    EffectCard a = (EffectCard)ThisScene;
                    a.StartEffect();
                    StartCoroutine(MoveLeft());
                }
                else if (ThisScene.NodeType == Node.CardCatalog.UseCard)//如果是use卡往左便买了
                {
                    UseCard a = (UseCard)ThisScene;
                    if (MainCharacter.GetMainCharacter().Money - a.value >= 0)
                    {
                        MainCharacter.GetMainCharacter().Money -= a.value;
                        BeginSetting.ShowGold();
                        StartCoroutine(MoveLeft());
                    }
                    else
                    {
                        this.gameObject.transform.rotation = Quaternion.identity;
                        this.gameObject.transform.localPosition = new Vector3(0, 0, 0);
                    }

                }
               else if (ThisScene.NodeType == Node.CardCatalog.MonsterCard)
                {
                    StartCoroutine(MoveLeft());
                }
               else if (ThisScene.NodeType == Node.CardCatalog.SceneCard)
                {
                    StartCoroutine(MoveLeft());
                }
                // Debug.Log("←"+(eventData.position.x - ButtonDownposition.x));
                HideMessage();

            }
            else if (eventData.position.x > ButtonDownposition.x && (eventData.position.x - ButtonDownposition.x) > 150)
            {

                if (ThisScene.NodeType == Node.CardCatalog.EffectCard)//如果是效果卡往右便发动效果
                {
                    EffectCard a = (EffectCard)ThisScene;
                    a.StartEffect();
                }
                StartCoroutine(MoveRight());
                //  Debug.Log("→");
                HideMessage();
              

            }
        
            else
            {
                this.gameObject.transform.rotation = Quaternion.identity;
                this.gameObject.transform.localPosition = new Vector3(0, 0, 0);
            }
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
        this.gameObject.transform.rotation = Quaternion.identity;
        this.gameObject.transform.localPosition = new Vector3(0, 0, 0);

        //判定是否有左结点，没有就加入新事件
        if (ThisScene.leftscene == null)
        {
            Debug.Log("左结点为空，加入新事件");
            ThisScene.leftscene = GameEvenManager.GetGameEvent().GetEvent();
        }

        //断绝结点====================
        Node lastnode = ThisScene;
        ThisPic.sprite = ThisScene.leftscene.NodePic;
        Debug.Log("左结点图片"+ThisPic.sprite.name);
        ThisScene = ThisScene.leftscene;
   
        lastnode.leftscene=null;
        //============================
        if (ThisScene.NodeType == Node.CardCatalog.MonsterCard)//判断是否是怪物牌
        {
            MainCharacter.GetMainCharacter().Enemy = (MonsterCard)ThisScene;
            Debug.Log("开始战斗");
            isfight = true;
        }
        UIManager.GetGameObject("Panel").GetComponent<CardB2F>().BigOnButtonClickRotateCard();//翻转
        ShowMessage();//显示文字------
        if (isfight)
        {
            Battle(MainCharacter.GetMainCharacter().Enemy, MainCharacter.GetMainCharacter());
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
        this.gameObject.transform.rotation = Quaternion.identity;//回归原位
        this.gameObject.transform.localPosition = new Vector3(0, 0, 0);//回归原位
        if (ThisScene.NodeType == Node.CardCatalog.MonsterCard)//判断是否是怪物牌
        {
        }

        //判定是否有右结点，没有就加入新事件

        if (ThisScene.rightscene == null)
        {
            ThisScene.rightscene = GameEvenManager.GetGameEvent().GetEvent();

        }
        Node lastnode = ThisScene;
        this.ThisPic.sprite = ThisScene.rightscene.NodePic;
        ThisScene = ThisScene.rightscene;
        //lastnode.rightscene = null;
        lastnode.rightscene=null;
        if (ThisScene.NodeType == Node.CardCatalog.MonsterCard)//判断是否是怪物牌
        {
            MainCharacter.GetMainCharacter().Enemy = (MonsterCard)ThisScene;
            Debug.Log("开始战斗");
            isfight = true;
        }
        ShowMessage();
        UIManager.GetGameObject("Panel").GetComponent<CardB2F>().BigOnButtonClickRotateCard();
        if (isfight)
        {
            Battle(MainCharacter.GetMainCharacter().Enemy, MainCharacter.GetMainCharacter());
        }
    }

    
    void Battle(MonsterCard monster,MainCharacter hero)
    {
        AttackMonster = monster;
        BeginSetting.SetMonsterStartHP(AttackMonster);
        BattleStart();
        UIManager.GetGameObject("MyCardFront").GetComponent<SmallPicture>().StartBattle(AttackMonster);
        // SmallPicture.GetSmallPicture().StartBattle(AttackMonster);//单例报错
        // SmallPicture.GetSmallPicture().heroturn = true;
    }

    public void BattleStart()
    {
        //CardBack.SetActive(false);
    //    leftdcpt.SetActive(false);
    //    rightdcpt.SetActive(false);
     //   Dcpt.SetActive(false);
        MyCards.SetActive(true);
        // MyCards.transform.DOLocalMoveY(MyCards.transform.localPosition.y - 100, 1);
        MyCards.transform.DOLocalMoveY(MyCards.transform.localPosition.y + 500, 1);
  
        // BattleManager battleManager = new BattleManager(MainCharacter.GetMainCharacter().GetHeroCards()));
        // GameObject.Find("MyCardFront").GetComponent<SmallPicFrame>().SetStartCard(battleManager.cardnum, battleManager.BattleCards);
        Invoke("Rotate", 1.5f);


    }
    void Rotate()
    {

        UIManager.GetGameObject("MyCards").GetComponent<CardB2F>().SmallOnButtonClickRotateCard();
    }
    public void BattleOver()
    {
        // CardBack.SetActive(true);
        MyCards.transform.DOLocalMoveY(MyCards.transform.localPosition.y - 500, 1);
        MyCards.SetActive(false);
        isfight = false;
        ThisScene = ThisScene.leftscene;
        ThisPic.sprite = ThisScene.NodePic;
        Dcpt.GetComponent<Text>().text = ThisScene.Description;
        UIManager.GetGameObject("Panel").GetComponent<CardB2F>().BigOnButtonClickRotateCard();
    }
}
