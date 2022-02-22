using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class UIManager : MonoBehaviour {

    // Use this for initialization
    public static GameObject HumanHu;//人类胡牌UI
    public static GameObject HumanZiMo;//人类自摸UI
    public static GameObject HumanPeng;//人类碰的UI
    public static GameObject HumanGang;//人类杠的UI
    public static GameObject HumanAnGang;//人类暗杠UI
    public static GameObject HumanEat;//人类吃UI
    public static GameObject EatPanel;//人类吃的面板UI
    public static GameObject EatLeft;//人类选择吃的形状UI
    public static GameObject EatMiddle;//人类选择吃的形状UI
    public static GameObject EatRight;//人类选择吃的形状UI
    public static GameObject HumanCancel;//人类取消UI
    public static GameObject End;//显示游戏结束UI

    void Start () {
        HumanHu = GameObject.Find("HumanHu");
        HumanZiMo = GameObject.Find("HumanZiMo");
        HumanPeng = GameObject.Find("HumanPeng");
        HumanGang = GameObject.Find("HumanGang");
        HumanAnGang = GameObject.Find("HumanAnGang");
        HumanEat = GameObject.Find("HumanEat");
        EatPanel = GameObject.Find("EatPanel");
        EatLeft = GameObject.Find("EatLeft");
        EatMiddle = GameObject.Find("EatMiddle");
        EatRight = GameObject.Find("EatRight");
        HumanCancel = GameObject.Find("HumanCancel");
        End = GameObject.Find("End");

        HumanHu.SetActive(false);
        HumanZiMo.SetActive(false);
        HumanPeng.SetActive(false);
        HumanGang.SetActive(false);
        HumanAnGang.SetActive(false);
        HumanEat.SetActive(false);
        EatPanel.SetActive(false);
        HumanCancel.SetActive(false);
        EatLeft.SetActive(false);
        EatMiddle.SetActive(false);
        EatRight.SetActive(false);
        End.SetActive(false);
    }
	public static void HideUI()
    {
        HumanHu.SetActive(false);
        HumanZiMo.SetActive(false);
        HumanPeng.SetActive(false);
        HumanGang.SetActive(false);
        HumanAnGang.SetActive(false);
        HumanEat.SetActive(false);
        EatPanel.SetActive(false);
        HumanCancel.SetActive(false);
        EatLeft.SetActive(false);
        EatMiddle.SetActive(false);
        EatRight.SetActive(false);
        End.SetActive(false);
    }
    // Update is called once per frame
    void Update () {
		
	}
}
