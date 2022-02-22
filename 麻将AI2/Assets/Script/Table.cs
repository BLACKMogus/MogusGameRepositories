using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class Table {
    public bool ISEND=false;
 

    List<Mahjong> Moutain;//牌山
    List<int> MahjongsNum;//每张牌的数量（34大小）
    Text LeaveTileText;//显示剩余牌
    int LeaveTile;//剩余牌数
    Text PlayTimeText;
    public static  List<Mahjong> AllRiverTail = new List<Mahjong>();

    public static int RiverHasTailNum(Mahjong input)
    {
        int num=0;
        for(int i=0;i<AllRiverTail.Count;i++)
        {
            if(input.num == AllRiverTail[i].num)
            {
                num++;
            }
        }
        return num;
    }
    public static int WaitTailInRiverNum(Mahjong input)
    {
        int num = 0;
        for (int i = 0; i < AllRiverTail.Count; i++)
        {
            if (input.num-2 == AllRiverTail[i].num || input.num - 1 == AllRiverTail[i].num|| input.num == AllRiverTail[i].num
                || input.num + 1 == AllRiverTail[i].num|| input.num + 2 == AllRiverTail[i].num &&input.TailType == AllRiverTail[i].TailType )
            {
                num++;
            }
        }
        return num;
    }
    public static  Mahjong CurrentTile = null;  
    public static bool StartPlay=false;
    //----------初始工作
    public void SetRandomMoutain()//设置初始随机牌山和展示面板
    {
        LeaveTileText = GameObject.Find("LeaveTile").GetComponent<Text>();//找到显示剩余牌数板
        PlayTimeText = GameObject.Find("PlayTimeText").GetComponent<Text>();//找到剩余时间板
        Moutain = MaJongManager.GetMJmanager().GetMahjongs();//顺序牌山
        MahjongsNum = MaJongManager.GetMJmanager().GetMahjongsNum(); //每个牌剩余的数量
        LeaveTile = 136;//总牌数

    }

    public Player[] PlayerPosition = new Player[4];//0是东,1南2西3北
    public void AddPlayer(Player[] TruePlayer)//随机座位
    {
        for(int i=0;i<4;i++)//打乱顺序
        {  
            int b = Random.Range(i, 4);
            Player change = TruePlayer[i];
            TruePlayer[i] = TruePlayer[b];
            TruePlayer[b] = change;
            //PlayerPosition[i] = TruePlayer[b];
        }
        PlayerPosition[0] = TruePlayer[0];
        PlayerPosition[0].position = 0;
        PlayerPosition[1] = TruePlayer[1];
        PlayerPosition[1].position = 1;
        PlayerPosition[2] = TruePlayer[2];
        PlayerPosition[2].position = 2;
        PlayerPosition[3] = TruePlayer[3];
        PlayerPosition[3].position = 3;

        for (int j=0;j<4;j++)
        {
            if(PlayerPosition[j].name=="Human1")
            {
                PlayerPosition[j].ShowPanel = GameObject.Find("HumanPanel"); ;//玩家视角panel
                PlayerPosition[j].TailRiver = GameObject.Find("HumanRiver");
                PlayerPosition[j].Fulu = GameObject.Find("HumanFulu");
                PlayerPosition[j].NameTxt = GameObject.Find("HumanNameTxt");
                PlayerPosition[j].NameTxt.GetComponent<Text>().text = PlayerPosition[j].name;

                PlayerPosition[((j + 1) % 4)].ShowPanel = GameObject.Find("LeftPanel"); //四个位置的四个面板 0是玩家panel，1是左，2是对家，3是右
                PlayerPosition[((j + 1) % 4)].TailRiver = GameObject.Find("LeftRiver");
                PlayerPosition[((j + 1) % 4)].Fulu = GameObject.Find("LeftFulu");
                PlayerPosition[((j + 1) % 4)].NameTxt = GameObject.Find("LeftNameTxt");
                PlayerPosition[((j + 1) % 4)].NameTxt.GetComponent<Text>().text = PlayerPosition[((j + 1) % 4)].name;

                PlayerPosition[((j + 2) % 4)].ShowPanel = GameObject.Find("MiddlePanel");
                PlayerPosition[((j + 2) % 4)].TailRiver = GameObject.Find("MiddleRiver");
                PlayerPosition[((j + 2) % 4)].Fulu = GameObject.Find("MiddleFulu");
                PlayerPosition[((j + 2) % 4)].NameTxt = GameObject.Find("MiddleNameTxt");
                PlayerPosition[((j + 2) % 4)].NameTxt.GetComponent<Text>().text = PlayerPosition[((j + 2) % 4)].name;

                PlayerPosition[((j + 3) % 4)].ShowPanel = GameObject.Find("RightPanel");
                PlayerPosition[((j + 3) % 4)].TailRiver = GameObject.Find("RightRiver");
                PlayerPosition[((j + 3) % 4)].Fulu = GameObject.Find("RightFulu");
                PlayerPosition[((j + 3) % 4)].NameTxt = GameObject.Find("RightNameTxt");
                PlayerPosition[((j + 3) % 4)].NameTxt.GetComponent<Text>().text = PlayerPosition[((j + 3) % 4)].name;
            }
        }
        Debug.Log("东=" + PlayerPosition[0].name + "南=" + PlayerPosition[1].name + "西=" + PlayerPosition[2].name + "北=" + PlayerPosition[3].name);

    }
    public void GiveTailStart()//牌桌起始发牌
    {
        for (int i = 0; i < 13; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                PlayerPosition[j].GetMahjong(ChoseTailToGive());
                LeaveTile--;
            }
        }

        LeaveTileText.text = "剩余牌数：" + LeaveTile.ToString();
        StartPlay = true;
    }
   
    //----------随机发牌
    public void GiveOneTail(Player user)//发一张牌
    {

        //SetTime(15f);
        Debug.Log("给玩家发牌:" + user.name);
        user.GetMahjong(ChoseTailToGive());
        user.state++;
        LeaveTile--;
        LeaveTileText.text = "剩余牌数：" + LeaveTile.ToString();  
        if(LeaveTile==0)
        {
            Debug.Log("没牌了");
        }
    }
    Mahjong ChoseTailToGive()//随机选择一个牌返回---之后可以改为开始就存储的随机序列，按顺序返回
    {
        
        int i = Random.Range(0, MahjongsNum.Count);//剩余牌内随机
        //Debug.Log(i);
        Mahjong Choose;

        if (MahjongsNum[i] - 1 > 0)
        {
            Choose = Moutain[i];
            MahjongsNum[i]--;
            return Choose;
        }
        else
        {
            Choose = Moutain[i];
            MahjongsNum[i]--;
            Moutain.RemoveAt(i);//拿完后没牌，移除此牌
            MahjongsNum.RemoveAt(i);

            return Choose;
        }
    }
    int number = 0;
    Mahjong ChoseGangTailToGive()
    {

        Mahjong Choose;
        if (number < 16)
        {
            Choose = Moutain[3];
            number++;
        }
        else
            Choose = ChoseTailToGive();
        return Choose;


    }
    public static int ExitWaitNum(Mahjong input)
    {
        int num =0 ;
        for(int k=0;k<AllRiverTail.Count;k++)
        {
            if(AllRiverTail[k].num == input.num-2 || AllRiverTail[k].num == input.num - 1 || AllRiverTail[k].num == input.num
                 || AllRiverTail[k].num == input.num + 1 || AllRiverTail[k].num == input.num + 2 )
            {
                num++;
            }

        }
        return num;
    }

    //---------打出一张牌后的工作(检查胡，碰，杠，吃等)
    public static int MingState = 0;
    bool once = false;
    bool signal = true;
    public void CheckTail(Player CurrentPL)//查其他人鸣牌
    {
      if(!once)
        {
            once = true;
            for (int i = 1; i <= 3; i++)
            {
                PlayerPosition[(CurrentPL.position + i) % 4].CheckMyself(CurrentPL);//Human弹出UI图标
            }
        }
        if (CheckResponse(CurrentPL))
        {
            switch (MingState)
            {
                case 0://测胡牌
                    bool HasHu=false;
                        for (int i = 1; i <= 3; i++)
                        {
                            if (PlayerPosition[(CurrentPL.position + i) % 4].HU)
                            {
                            PlayerPosition[(CurrentPL.position + i) % 4].Hu(CurrentPL);
                            HasHu = true;
                            };//在Hu里面检查自己是否能胡再给出响应
                        }
                        if(HasHu)
                        {
                   
                        UIManager.End.SetActive(true);
                        Game.start = false;
                        }
                        else
                         {
                        MingState++;
                        }
                      
                    break;
                case 1://测碰牌
                    bool HasPeng=false;
                        for (int i = 1; i <= 3; i++)
                        {
                            if (PlayerPosition[(CurrentPL.position + i) % 4].PENG)
                            {
                                Debug.Log("玩家碰牌");
                                PlayerPosition[(CurrentPL.position + i) % 4].Peng(CurrentPL);//执行碰的方法
                                HasPeng = true;
                                MingState = 0;
                                CurrentPL.state = 0;//当前打牌的玩家状态清零，下次可以发牌
                                SetPLResponse();
                                SetMing();
                                once = false;
                                Game.state = PlayerPosition[(CurrentPL.position + i) % 4].position;//位置调到碰牌的座位
                                break;
                            }
                            if (PlayerPosition[(CurrentPL.position + i) % 4].GANG)
                            {
                                Debug.Log("玩家杠牌");
                                PlayerPosition[(CurrentPL.position + i) % 4].Gang(CurrentPL);//执行杠的方法
                                HasPeng = true;
                                MingState = 0;
                                CurrentPL.state = 0;
                                SetPLResponse();
                                SetMing();
                                once = false;
                                Game.state = PlayerPosition[(CurrentPL.position + i) % 4].position;//位置调到碰牌的座位

                                break;
                            }
                    }
                    if (!HasPeng)
                        {
                            MingState++;
                        }             
                    break;
                case 2://测吃牌
                    bool HasEat = false;
                        if (PlayerPosition[(CurrentPL.position + 1) % 4].EAT!=0)//如果下家有吃
                        {
                        //Debug.Log("当前打牌玩家是：" + CurrentPL.name + "下家吃牌玩家是" + PlayerPosition[(CurrentPL.position + 1) % 4].name);
                            if (PlayerPosition[(CurrentPL.position + 1) % 4].EAT==1)
                            {
                                PlayerPosition[(CurrentPL.position + 1) % 4].EatLeft(CurrentPL);
                            }
                            else if (PlayerPosition[(CurrentPL.position + 1) % 4].EAT == 2)
                            {
                                PlayerPosition[(CurrentPL.position + 1) % 4].EatMiddle(CurrentPL);
                            }
                            else if (PlayerPosition[(CurrentPL.position + 1) % 4].EAT == 3)
                            {
                                PlayerPosition[(CurrentPL.position + 1) % 4].EatRight(CurrentPL);
                            }
                            HasEat = true;
                            MingState = 0;
                            CurrentPL.state = 0;
                            SetPLResponse();
                            SetMing();
                            once = false;
                            Game.state = PlayerPosition[(CurrentPL.position + 1) % 4].position;//位置调到吃牌的座位      
                            break;
                        }
                        if(!HasEat)
                        {
                            MingState++;
                        }
                    break;
                case 3:
                    CurrentPL.state++;
                    MingState = 0;
                    SetPLResponse();
                    SetMing();
                    once = false;
                    break;
            }
        }


    }
    public void CheckHandTail(Player CurrentPL)
    {
        if (!once)
        {
            once = true;
            CurrentPL.CheckHandTail();//检查手牌
        }
        if(CurrentPL.Response)
        {
            switch (MingState)
            {
                case 0:
                    bool HasZiMo = false;
                    if (CurrentPL.ZIMO)
                    {
                        CurrentPL.ZiMo();
                        HasZiMo = true;
                    }
                    if(HasZiMo)
                    {
                        UIManager.End.SetActive(true);
                        Game.start = false;
                    }
                    else if(!HasZiMo)
                    {
                        MingState++;
                    }
                    break;
                case 1:
                    bool HasAnGang = false;
                    if (CurrentPL.ANGANG)
                    {
                        CurrentPL.AnGang();
                        HasAnGang = true;
                    }
                    if (HasAnGang)
                    {
                        CurrentPL.AnGang();//执行杠的方法
                        HasAnGang = true;
                        MingState = 0;
                        SetPLResponse();
                        SetMing();
                        once = false;
                    }
                    else if (!HasAnGang)
                    {
                        MingState++;
                    }
                    break;
                case 2:
                    CurrentPL.state++;
                    MingState = 0;
                    SetPLResponse();
                    SetMing();
                    once = false;
                    break;
            }
        }


    }
    bool CheckResponse(Player CurrentPL)
    {

        if (PlayerPosition[(CurrentPL.position + 1) % 4].Response != false &&
            PlayerPosition[(CurrentPL.position + 2) % 4].Response != false &&
            PlayerPosition[(CurrentPL.position + 3) % 4].Response != false)
        {
            return true;
        }
        else return false;
    }

    void SetPLResponse()
    {
            PlayerPosition[0].Response = false;
            PlayerPosition[1].Response = false;
            PlayerPosition[2].Response = false;
            PlayerPosition[3].Response = false;
    }
    void SetMing()
    {
        for (int i = 0; i <4; i++)
            {
            PlayerPosition[i].SetMing();
            }
    }
        //-------------出牌计时
        float time=15f;
    public void SetTime(float num)
    {
        time =num;
    }
    public float GetTime()
    {
        return time;
    }
    public bool CountDownToZero(Player player)
    {
        time -= Time.deltaTime;
        PlayTimeText.text = "剩余时间：" + (int)time;
        if (time <= 0)
        {
            SetTime(15f);
            return true;
        }
        return false;
    }
}
