using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public abstract class Player {

    //GameObject ShowPanel;
    public string name;
    public bool Response = false;
    public bool HU = false;
    public bool ZIMO = false;
    public bool PENG = false;
    public bool GANG = false;
    public bool ANGANG = false;
    public int EAT = 0;//1吃左2吃中3吃右
    public bool EATLEFT = false;
    public bool EATMIDDLE = false;
    public bool EATRIGHT = false;


    
    public void SetMing()
    {
    ZIMO = false;
    Response = false;
    HU = false;
    PENG = false;
    GANG = false;
    ANGANG = false;
    EAT = 0;
    EATLEFT = false;
    EATMIDDLE = false;
    EATRIGHT = false;
}

    public int state = 0;//自己回合里的状态
    public bool HasEmpty = false;
    public int position;//玩家位置
    public GameObject ShowPanel;
    public GameObject TailRiver;
    public List<Mahjong> RiverTail = new List<Mahjong>();//牌河里的麻将
    public GameObject Fulu;
    public GameObject NameTxt;
    public List<Mahjong> HandTail = new List<Mahjong>(14);
    public List<GameObject> HandTailGameObject = new List<GameObject>(14);
    public GameObject newEmptytile;//空物体做格子
    public Player (string a)
    {
        name = a;
    }
    public void GetMahjong(Mahjong input)//发牌
    {

        if (!Table.StartPlay)
        {
            HandTail.Add(new Mahjong(input));//进牌，排序
            Sort();

        }
        else if (Table.StartPlay)//如果开始了，以后进张要有空格
        {
            Debug.Log("发的牌是" + input.tail);
            newEmptytile = GameObject.Instantiate((GameObject)Resources.Load("Prfb/EmptyHandTile"), ShowPanel.GetComponent<Transform>());//添加空物体来表示入牌
            //newEmptytile.GetComponent<Image>().color = new Color(255, 255, 255, 0);
            HasEmpty = true;
            HandTail.Add(new Mahjong(input));
            GameObject newtile = GameObject.Instantiate((GameObject)Resources.Load("Prfb/HandTile"), ShowPanel.GetComponent<Transform>());
            newtile.GetComponent<Image>().sprite = HandTail[HandTail.Count - 1].icon;
            HandTailGameObject.Add(newtile);
        }
        //打印手牌
        //for(int k=0;k<HandTail.Count;k++)
        //{
        //    Debug.Log(k + "=" + HandTail[k].num);
        //}

    }
    public abstract void PlayTail();//出牌
    public void PutTailToRiver(GameObject input, Mahjong input2)
    {
        GameObject.Instantiate(input, TailRiver.GetComponent<Transform>());
        RiverTail.Add(new Mahjong(input2));
        Table.AllRiverTail.Add(new Mahjong(input2));
    }



    public abstract void CheckMyself(Player CurrentPL);
    public abstract void CheckHandTail();

    public bool CanHuPai(List<Mahjong> handtail, Mahjong input)
    {
        List<int> NewHandtail = new List<int>(handtail.Count);
        for (int q=0;q< handtail.Count;q++)
        {

            NewHandtail.Add(handtail[q].num);
        }
        NewHandtail.Add(input.num);//复制手牌并加入当前场面上的牌
        if (NewHandtail.Count == 2)
        {

            return NewHandtail[0] == NewHandtail[1];//如果手牌只剩一张，是单吊胡牌
        }
        NewHandtail.Sort();//排序
        for (int i = 0; i < NewHandtail.Count; i++)
        {
            List<int> CopyTail = new List<int>(NewHandtail);
            List<int> ds = NewHandtail.FindAll(delegate (int d) { return NewHandtail[i] == d; });

            if (ds.Count >= 2)//当某张牌大于2时，移去两张此牌，进行胡牌判定
            {
                CopyTail.Remove(NewHandtail[i]);
                CopyTail.Remove(NewHandtail[i]);
                i += ds.Count;
                if (HuPaiPanDin(CopyTail))//进行胡牌判定
                {
                    string a = null;
                    for (int q = 0; q < CopyTail.Count; q++)
                    {
                        a = a + "-" + CopyTail[q];
                    }
                    //Debug.Log("可以胡牌" + a);
                    return true;
                }
            }
        }

        return false;
    }
    public bool HuPaiPanDin(List<int> mahs)
    {
        if(mahs.Count == 0) { return true; }//如果不剩下牌，则返回true
        List<int> fs = mahs.FindAll(delegate (int a)//获取当前第一张牌的个数
          {
              return mahs[0] == a;
          });

        //组成刻子
        if (fs.Count==3)
        {
            mahs.Remove(mahs[0]);
            mahs.Remove(mahs[0]);
            mahs.Remove(mahs[0]);
            return HuPaiPanDin(mahs);////去掉刻子后进行递归
        }
        else
        { //组成顺子
            Mahjong a = new Mahjong(mahs[0]);
            Mahjong b = new Mahjong(mahs[0]+1);
            Mahjong c = new Mahjong(mahs[0]+2);
            if (mahs.Contains(b.num) && mahs.Contains(c.num) && a.TailType == b.TailType && b.TailType == c.TailType && a.TailType!=Mahjong.Type.Feng&& a.TailType != Mahjong.Type.Zi)
            {
                mahs.Remove(mahs[0] + 2);
                mahs.Remove(mahs[0] + 1);
                mahs.Remove(mahs[0]);

                return HuPaiPanDin(mahs);//去掉顺子后进行递归
            }
            return false;
        }

    }

    public bool CanZiMo()
    {
        List<Mahjong> NewHandtail = new List<Mahjong>(HandTail.Count);
        for (int q = 0; q < HandTail.Count-1; q++)
        {

            NewHandtail.Add(HandTail[q]);
        }
        if (CanHuPai(NewHandtail, HandTail[HandTail.Count-1]))//自摸
        {

            return true;
        }
        else
            return false;
    }
    public bool CanHu()
    {
        //Debug.Log(PrintTail());
        if (CanHuPai(HandTail, Table.CurrentTile))//吃别人的铳
        {
            return true;
        }
        else
           return false;
    }
    public bool CanPeng()
    {
        int num = 0;
        for (int n = 0; n < HandTail.Count; n++)
        {
            if (HandTail[n].num == Table.CurrentTile.num)
            {
                num++;
            }
        }
        if (num >= 2)
        {
            Debug.Log(name + "能碰" );
            return true;
        }
        else
        return false;
    }
    public bool CanGang()
    {
        int num = 0;
        for (int n = 0; n < HandTail.Count; n++)
        {
            if (HandTail[n].num == Table.CurrentTile.num)
            {
                num++;
            }
        }
        if (num == 3)
        {
            Debug.Log(name + "能杠");
            return true;
        }
        else
            return false;
    }
    public bool CanAnGang()
    {
        List<int> NewHandtail = new List<int>(HandTail.Count);
        for (int q = 0; q < HandTail.Count; q++)
        {

            NewHandtail.Add(HandTail[q].num);
        }
        for (int i = 0; i < NewHandtail.Count; i++)
        {
            List<int> ds = NewHandtail.FindAll(delegate (int d) { return NewHandtail[i] == d; });
            if (ds.Count > 3)
            {
                return true;
            }
        }
        return false;
    }

    public bool CanEat()
    {
        bool a1 = false, b1 = false, c1 = false, d1 = false;
        Mahjong a = null;
        Mahjong b = null;
        Mahjong c = null;
        Mahjong d = null;
        for (int n = 0; n < HandTail.Count; n++)
        {
            if(Table.CurrentTile.TailType != Mahjong.Type.Feng && Table.CurrentTile.TailType != Mahjong.Type.Zi)
            {
                if (HandTail[n].num == Table.CurrentTile.num - 2 && HandTail[n].TailType == Table.CurrentTile.TailType) { a1 = true; a = HandTail[n]; }
                if (HandTail[n].num == Table.CurrentTile.num - 1 && HandTail[n].TailType == Table.CurrentTile.TailType) { b1 = true; b = HandTail[n]; }
                if (HandTail[n].num == Table.CurrentTile.num + 1 && HandTail[n].TailType == Table.CurrentTile.TailType) { c1 = true; c = HandTail[n]; }
                if (HandTail[n].num == Table.CurrentTile.num + 2 && HandTail[n].TailType == Table.CurrentTile.TailType) { d1 = true; d = HandTail[n]; }
            }
    
        }
        if (a1 && b1)
        {
            EATLEFT = true; Debug.Log(name + "能吃" + a.tail + "=" + b.tail);
        }
        if (b1 && c1)
        {
            EATMIDDLE = true; Debug.Log(name + "能吃" + b.tail + "=" +c.tail);
        }
        if (c1 && d1)
        {
            EATRIGHT = true; Debug.Log(name + "能吃" + c.tail + "=" + d.tail);
        }
        return EATLEFT||EATMIDDLE||EATRIGHT;
    }

    //吃碰杠胡
    public void ZiMo()
    {
        Debug.Log(name + "自摸");
    }
  
    public void Hu(Player currentPL)
    {
       Debug.Log(currentPL.name + "放炮" + name + "胡");
    }
    public void Peng(Player currentPL)
    {
        Debug.Log("红中bug碰牌");
        for (int n = 0; n < HandTail.Count; n++)
        {
            if (HandTail[n].num == Table.CurrentTile.num)
            {
                //Debug.Log("Human可以碰");
                currentPL.RemoveRiverTail();
                GameObject.Instantiate(HandTailGameObject[n], Fulu.GetComponent<Transform>());
                GameObject.Instantiate(HandTailGameObject[n], Fulu.GetComponent<Transform>());
                GameObject.Instantiate(HandTailGameObject[n], Fulu.GetComponent<Transform>());
                Table.AllRiverTail.Add(new Mahjong(HandTail[n]));
                Table.AllRiverTail.Add(new Mahjong(HandTail[n]));
                RemoveTail(n + 1);
                RemoveTail(n);
               
                state = currentPL.state - 1;//回上一阶段进行出牌    
                break;
            }
        }
    }

    public void AnGang()
    {
        bool once = true;
        List<int> NewHandtail = new List<int>(HandTail.Count);
        for (int q = 0; q < HandTail.Count; q++)
        {

            NewHandtail.Add(HandTail[q].num);
        }
        for (int i = 0; i < NewHandtail.Count; i++)
        {
            List<int> ds = NewHandtail.FindAll(delegate (int d) { return NewHandtail[i] == d; });
            if (ds.Count > 3)
            {
               if(once)
                {
                    once = false;
                    for (int q = 0; q < HandTail.Count; )
                    {
                        if (HandTail[q].num == ds[0])
                        {
                            GameObject.Instantiate(HandTailGameObject[q], Fulu.GetComponent<Transform>());
                            Table.AllRiverTail.Add(new Mahjong(HandTail[q]));
                            RemoveTail(q);
                        }
                        else
                            q++;
                    }
                }
               
            }
        }
        if (HasEmpty)
        {
            GameObject.Destroy(newEmptytile);
        }

        state = 0;//回摸牌在出牌  

    }
    public void Gang(Player currentPL)
    {
        for (int n = 0; n < HandTail.Count; n++)
        {
            if (HandTail[n].num == Table.CurrentTile.num)
            {
                //Debug.Log("Human可以碰");
                currentPL.RemoveRiverTail();
                GameObject.Instantiate(HandTailGameObject[n], Fulu.GetComponent<Transform>());
                GameObject.Instantiate(HandTailGameObject[n], Fulu.GetComponent<Transform>());
                GameObject.Instantiate(HandTailGameObject[n], Fulu.GetComponent<Transform>());
                GameObject.Instantiate(HandTailGameObject[n], Fulu.GetComponent<Transform>());
                Table.AllRiverTail.Add(new Mahjong(HandTail[n + 2]));
                Table.AllRiverTail.Add(new Mahjong(HandTail[n + 1]));
                Table.AllRiverTail.Add(new Mahjong(HandTail[n]));
                RemoveTail(n + 2);
                RemoveTail(n + 1);
                RemoveTail(n);
                state = currentPL.state -3;//回摸牌在出牌   
                break;
            }
        }
    }

    public void EatLeft(Player currentPL)
    {
        bool a = false;
        bool b = false;
        Mahjong record1 = null;
        Mahjong record2 = null;
        for (int n = 0; n < HandTail.Count; n++)
        {
            if (HandTail[n].num == Table.CurrentTile.num - 2 && !a)
            {
                a = true;
                record1 = HandTail[n];
                GameObject.Instantiate(HandTailGameObject[n], Fulu.GetComponent<Transform>());
                Table.AllRiverTail.Add(new Mahjong(HandTail[n]));
            }
            if(HandTail[n].num == Table.CurrentTile.num - 1 && !b)
            {
                b = true;
                record2 = HandTail[n];
                GameObject.Instantiate(HandTailGameObject[n], Fulu.GetComponent<Transform>());
                Table.AllRiverTail.Add(new Mahjong(HandTail[n]));
            }
           
        }
       
        //GameObject.Instantiate(HandTailGameObject[record2], Fulu.GetComponent<Transform>());
        GameObject newtile = GameObject.Instantiate((GameObject)Resources.Load("Prfb/HandTile"), Fulu.GetComponent<Transform>());
        newtile.GetComponent<Image>().sprite = Table.CurrentTile.icon;
        currentPL.RemoveRiverTail();
        RemoveTail(record2);
        RemoveTail(record1);
        state = currentPL.state - 1;//回上一阶段进行出牌    

    }
    public void EatMiddle(Player currentPL)
    {
        bool a = false;
        bool b = false;
        Mahjong record1 = null;
        Mahjong record2 = null;
        for (int n = 0; n < HandTail.Count; n++)
        {
            if (HandTail[n].num == Table.CurrentTile.num - 1 && !a)
            {
                a = true;
                record1 = HandTail[n];
                GameObject.Instantiate(HandTailGameObject[n], Fulu.GetComponent<Transform>());
                Table.AllRiverTail.Add(new Mahjong(HandTail[n]));
            }
            if (HandTail[n].num == Table.CurrentTile.num + 1 && !b)
            {
                b = true;
                record2 = HandTail[n];
                GameObject.Instantiate(HandTailGameObject[n], Fulu.GetComponent<Transform>());
                Table.AllRiverTail.Add(new Mahjong(HandTail[n]));
            }

        }
        //GameObject.Instantiate(HandTailGameObject[record1], Fulu.GetComponent<Transform>());
        GameObject newtile = GameObject.Instantiate((GameObject)Resources.Load("Prfb/HandTile"), Fulu.GetComponent<Transform>());
        //GameObject.Instantiate(HandTailGameObject[record2], Fulu.GetComponent<Transform>());
        newtile.GetComponent<Image>().sprite = Table.CurrentTile.icon;
        currentPL.RemoveRiverTail();
        RemoveTail(record2);
        RemoveTail(record1);
        state = currentPL.state - 1;//回上一阶段进行出牌    
    }
    public void EatRight(Player currentPL)
    {
        bool a = false;
        bool b = false;
        Mahjong record1 = null;
        Mahjong record2 = null;
        for (int n = 0; n < HandTail.Count; n++)
        {
            if (HandTail[n].num == Table.CurrentTile.num + 1 && !a)
            {
                a = true;
                record1 = HandTail[n];
                GameObject.Instantiate(HandTailGameObject[n], Fulu.GetComponent<Transform>());
                Table.AllRiverTail.Add(new Mahjong(HandTail[n]));
            }
            if (HandTail[n].num == Table.CurrentTile.num + 2 && !b)
            {
                b = true;
                record2 = HandTail[n];
                GameObject.Instantiate(HandTailGameObject[n], Fulu.GetComponent<Transform>());
                Table.AllRiverTail.Add(new Mahjong(HandTail[n]));
            }

        }
        GameObject newtile = GameObject.Instantiate((GameObject)Resources.Load("Prfb/HandTile"), Fulu.GetComponent<Transform>());
        newtile.GetComponent<Image>().sprite = Table.CurrentTile.icon;
        currentPL.RemoveRiverTail();    
        RemoveTail(record2);
        RemoveTail(record1);
        state = currentPL.state - 1;//回上一阶段进行出牌    
    }


    public void RemoveRiverTail()
    {
        //Debug.Log("牌河牌的数量" + TailRiver.transform.childCount);
        //Debug.Log("牌河牌的名字" + TailRiver.transform.GetChild(TailRiver.transform.childCount-1).gameObject.GetComponent<Image>().sprite.name);
        Transform a = TailRiver.transform.GetChild(TailRiver.transform.childCount-1);
        GameObject.Destroy(a.gameObject);
    }
    public void RemoveTail(int n)
    {
        GameObject.Destroy(HandTailGameObject[n]);
        HandTailGameObject.RemoveAt(n);
        HandTail.RemoveAt(n);
    }
    public void RemoveTail(Mahjong input)
    {
        int n = HandTail.IndexOf(input);
        GameObject.Destroy(HandTailGameObject[n]);
        HandTailGameObject.RemoveAt(n);
        HandTail.RemoveAt(n);
    }
    public void AddTail(Mahjong input)
    {
        HandTail.Add(input);
        GameObject newtile = GameObject.Instantiate((GameObject)Resources.Load("Prfb/HandTile"), ShowPanel.GetComponent<Transform>());
        newtile.GetComponent<Image>().sprite = input.icon;
        HandTailGameObject.Add(newtile);
        
    }

    //打印手牌
    public void PrintTail()//打印手牌
    {
        string a=null;
        for(int q=0;q<HandTail.Count;q++)
        {
            a = a + "-" + HandTail[q].tail;
        }
        //Debug.Log("打印手牌" + a);
    }
    public void Sort()
    {


        HandTail.Sort((x, y) => { return x.num.CompareTo(y.num); });
        for (int k = 0; k < HandTailGameObject.Count; k++)//全部删除
        {
            GameObject.Destroy(HandTailGameObject[k]);
        }
        HandTailGameObject.Clear();

        for (int k = 0; k < HandTail.Count; k++)//全部重新建立
        {
            GameObject newtile = GameObject.Instantiate((GameObject)Resources.Load("Prfb/HandTile"), ShowPanel.GetComponent<Transform>());
            newtile.GetComponent<Image>().sprite = HandTail[k].icon;
            HandTailGameObject.Add(newtile);
            
        }


    }


}
