using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class Human : Player
{

    //GameObject HumanPeng;

    public GameObject choose;
    public Human(string Name) : base(Name)
    {


    }

    public override void PlayTail()
    {
        Mahjong RecordobjM = null;
        //int k = 0;
        //GameObject.Destroy(newEmptytile);
        //PutTailToRiver(HandTailGameObject[k], HandTail[k]);//手牌置入牌河
        //Mahjong a = new Mahjong(HandTail[k]);
        //Debug.Log(name + "打的牌是" + HandTail[k].tail);
        //RemoveTail(k);//移除此牌
        //Sort();
        //Table.CurrentTile = a;//场上现在打出的是这张牌
        //state++;
        //Debug.Log(PrintTail());
        if (Input.GetMouseButtonDown(0))
        {

        }
        if (Input.GetMouseButtonUp(0))
        {

            choose = EventSystem.current.currentSelectedGameObject;
            //Debug.Log("按下去的choose" + choose.name);
            //Debug.Log("TAG" + choose.tag);
            if (choose.tag == "HandTail" && choose.transform.parent.name == "HumanPanel")
            {
                GameObject.Destroy(newEmptytile);

                //Debug.Log("选择牌的index" + choose.transform.GetSiblingIndex());
                //Debug.Log("儿子的数量" + choose.transform.parent.childCount);
                if (choose.transform.GetSiblingIndex() == choose.transform.parent.childCount - 1 && HasEmpty)
                {

                    //GameObject.Instantiate(choose, TailRiver.GetComponent<Transform>());
                    PutTailToRiver(choose, HandTail[choose.transform.GetSiblingIndex() - 1]);//进牌河  
                    //Debug.Log("AA选择的牌" + HandTail[choose.transform.GetSiblingIndex() - 1].tail);
                    RecordobjM = HandTail[choose.transform.GetSiblingIndex() - 1];//记录打出牌
                    RemoveTail(choose.transform.GetSiblingIndex() - 1);//移除手牌
                    //Debug.Log("AA移除的是第" + (choose.transform.GetSiblingIndex() - 1) + "手牌");
                }
                else
                {
                    //GameObject.Instantiate(choose, TailRiver.GetComponent<Transform>());
                    PutTailToRiver(choose, HandTail[choose.transform.GetSiblingIndex()]);
                    //Debug.Log("BB选择的牌" + HandTail[choose.transform.GetSiblingIndex()].tail);
                    RecordobjM = HandTail[choose.transform.GetSiblingIndex()];//记录打出牌
                    RemoveTail(choose.transform.GetSiblingIndex());
                    //Debug.Log("BB移除的是第" + (choose.transform.GetSiblingIndex()) + "手牌");

                    Sort();

                }
                Table.CurrentTile = RecordobjM;
                HasEmpty = false;
                state++;
                Debug.Log("打的牌是" + RecordobjM.tail);
            }


        }
    }


    public void ZiMoBtn()
    {
        ZIMO = true;
        UIManager.HideUI();
        Response = true;
    }
    public void AnGangBtn()
    {
        ANGANG = true;
        UIManager.HideUI();
        Response = true;
    }
    public override void CheckHandTail()
    {
        bool pass = true;

        if (CanZiMo())
        {
            UIManager.HumanZiMo.GetComponent<Button>().onClick.AddListener(this.ZiMoBtn);
            UIManager.HumanZiMo.SetActive(true); //弹出胡ui
            pass = false;
        }

        if (CanAnGang())
        {
            UIManager.HumanAnGang.GetComponent<Button>().onClick.AddListener(this.AnGangBtn);
            UIManager.HumanAnGang.SetActive(true); //弹出暗杠ui
            pass = false;
        }
        if (pass)
        {
            Response = true;
        }
        else
        {
            UIManager.HumanCancel.GetComponent<Button>().onClick.AddListener(this.CancelBtn);
            UIManager.HumanCancel.SetActive(true);//弹出取消ui
        }

       
    }
    Player Opponent;
    public override void CheckMyself(Player CurrentPL)
    {
        bool pass = true;
        if (CanHu())
        {
            UIManager.HumanHu.GetComponent<Button>().onClick.AddListener(this.HuBtn);
            UIManager.HumanHu.SetActive(true); //弹出胡ui
            pass = false;
        }
        if (CanPeng())
        {
            UIManager.HumanPeng.GetComponent<Button>().onClick.AddListener(this.PengBtn);
            UIManager.HumanPeng.SetActive(true); //弹出碰ui
            pass = false;
        }
        if (CanGang())
        {
            UIManager.HumanGang.GetComponent<Button>().onClick.AddListener(this.GangBtn);
            UIManager.HumanGang.SetActive(true);//弹出杠ui
            pass = false;
        }
        if (CanEat() && (CurrentPL.position + 1) % 4 == position)
        {
            Debug.Log("currentposition" + CurrentPL.position);
            Debug.Log("humanposition" + position);
            UIManager.HumanEat.GetComponent<Button>().onClick.AddListener(this.EatBtn);
            UIManager.HumanEat.SetActive(true);//弹出吃ui
            pass = false;
        }

        if (pass)
        {
            Response = true;
        }
        else
        {
            UIManager.HumanCancel.GetComponent<Button>().onClick.AddListener(this.CancelBtn);
            UIManager.HumanCancel.SetActive(true);//弹出取消ui
        }
    }
    public void HuBtn()
    {
        HU = true;
        UIManager.HideUI();
        Response = true;
    }
    public void PengBtn()
    {
        PENG = true;
        UIManager.HideUI();
        Response = true;
    }
    public void GangBtn()
    {
        GANG = true;
        UIManager.HideUI();
        Response = true;
    }
    public void EatBtn()
    {
        UIManager.EatPanel.SetActive(true);
        Mahjong a = null; Mahjong b = null; Mahjong c = null; Mahjong d = null;
        for (int n = 0; n < HandTail.Count; n++)
        {
            if (HandTail[n].num == Table.CurrentTile.num - 2 && HandTail[n].TailType == Table.CurrentTile.TailType) { Debug.Log("aaaaaaaaaaaa"); a = HandTail[n]; }
            if (HandTail[n].num == Table.CurrentTile.num - 1 && HandTail[n].TailType == Table.CurrentTile.TailType) { Debug.Log("bbbbbbbbbbb"); b = HandTail[n]; }
            if (HandTail[n].num == Table.CurrentTile.num + 1 && HandTail[n].TailType == Table.CurrentTile.TailType) { Debug.Log("cccccccccccc"); c = HandTail[n]; }
            if (HandTail[n].num == Table.CurrentTile.num + 2 && HandTail[n].TailType == Table.CurrentTile.TailType) { Debug.Log("ddddddddddddd"); d = HandTail[n]; }
        }
        if (EATLEFT)
        {

            UIManager.EatLeft.transform.GetChild(0).GetComponent<Image>().sprite = a.icon;
            UIManager.EatLeft.transform.GetChild(1).GetComponent<Image>().sprite = b.icon;
            UIManager.EatLeft.transform.GetChild(2).GetComponent<Image>().sprite = Table.CurrentTile.icon;
            UIManager.EatLeft.GetComponent<Button>().onClick.AddListener(this.EatLeftBtn);
            UIManager.EatLeft.SetActive(true);
        }
        if (EATMIDDLE)
        {

            UIManager.EatMiddle.transform.GetChild(0).GetComponent<Image>().sprite = b.icon;
            UIManager.EatMiddle.transform.GetChild(1).GetComponent<Image>().sprite = Table.CurrentTile.icon;
            UIManager.EatMiddle.transform.GetChild(2).GetComponent<Image>().sprite = c.icon;
            UIManager.EatMiddle.GetComponent<Button>().onClick.AddListener(this.EatMiddleBtn);
            UIManager.EatMiddle.SetActive(true);
        }
        if (EATRIGHT)
        {

            UIManager.EatRight.transform.GetChild(0).GetComponent<Image>().sprite = Table.CurrentTile.icon;
            UIManager.EatRight.transform.GetChild(1).GetComponent<Image>().sprite = c.icon;
            UIManager.EatRight.transform.GetChild(2).GetComponent<Image>().sprite = d.icon;
            UIManager.EatRight.GetComponent<Button>().onClick.AddListener(this.EatRightBtn);
            UIManager.EatRight.SetActive(true);
        }

    }
    void EatLeftBtn()
    {
        EAT = 1;
        UIManager.HideUI();
        Response = true;
    }
    void EatMiddleBtn()
    {
        EAT = 2;
        UIManager.HideUI();
        Response = true;
    }
    void EatRightBtn()
    {
        EAT = 3;
        UIManager.HideUI();
        Response = true;
    }
    void CancelBtn()
    {
        UIManager.HideUI();
        Response = true;
    }
   

}
