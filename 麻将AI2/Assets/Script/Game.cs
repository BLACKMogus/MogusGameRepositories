using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class Game : MonoBehaviour {

    Table table;//开桌
    Player[] players = new Player[4];//四人玩家
    public Human human = new Human("Human1");
    AI robot1 = new AI("R1");
    AI robot2 = new AI("R2");
    AI robot3 = new AI("R3");
    public static int xunshu = 0;

    void Start () {

        MaJongManager.GetMJmanager().MahJongInitialize();//初始牌库
        table = new Table();//开新桌
        table.SetRandomMoutain();//设置初始随机牌山
        //初始成员列表
        players[0] = human;
        players[1] = robot1;
        players[2] = robot2;
        players[3] = robot3;//玩家入座
        table.AddPlayer(players);
        table.GiveTailStart();
	}
    public static bool  start = false;

    public void BtnStartGame()
    {
        StartCoroutine("SetStart");
    }
    IEnumerator SetStart()
    {
        
        yield return new WaitForSeconds(1f);
        start = true;
    }
    Mahjong a;
 

    void PlayTailTurn(int PlayerNo)
    {
        switch (table.PlayerPosition[PlayerNo].state)
        {
            case 0: Debug.Log("发牌"); table.GiveOneTail(table.PlayerPosition[PlayerNo]); table.PlayerPosition[PlayerNo].PrintTail(); break;
            case 1: Debug.Log(table.PlayerPosition[PlayerNo].name+"检查自己手牌胡杠" ); table.CheckHandTail(table.PlayerPosition[PlayerNo]); break;
            case 2: Debug.Log(table.PlayerPosition[PlayerNo].name+"玩家打牌" ); table.PlayerPosition[PlayerNo].PlayTail();  break;
            case 3: Debug.Log(table.PlayerPosition[PlayerNo].name + "检查别人是否鸣牌"); table.CheckTail(table.PlayerPosition[PlayerNo]); break;
            case 4: Debug.Log(table.PlayerPosition[PlayerNo].name + "切下一个回合");/*if(!table.HasMing)*/ NextTurn(PlayerNo); break;
        }

    }
    void NextTurn(int PlayerNo)
    {
        //table.SetTime(15f);
        xunshu++;
        if (PlayerNo == 3)
            state = 0;
        else
            state++;

        table.PlayerPosition[PlayerNo].state = 0;
    }

    //void OnGUI()
    //{
    //    if(human.IsHumanTurn)
    //    {
    //        human.HumanPlayTail();
    //    }
    //}
    //public static bool ChangeState=true;
    public static int state = 0;
    void Update () {


        if (start)
        {
            switch (state)
            {
               
                case 0: PlayTailTurn(0); break;
                case 1: PlayTailTurn(1); break;
                case 2: PlayTailTurn(2);  break;
                case 3: PlayTailTurn(3);  break;


            }

        }
      
    }

    public void RestartBtn()
    {
        MaJongManager.GetMJmanager().MahJongInitialize();
        start = false;
        state = 0;
        Table.StartPlay = false;
        Table.CurrentTile = null;
        Table.MingState = 0;
        SceneManager.LoadScene(0);
        Table.AllRiverTail.Clear();
        xunshu = 0;
    }
}
