using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Threading;
public class AI : Player {
    Player Opponent;
    public AI(string Name) : base(Name)
    {

    }
    public override void PlayTail()
    {
        PrintTail();
        int w = AIPlay(HandTail);//获得当前应该打的牌   
        int k = 0;
        for(int n=0;n<HandTail.Count;n++)//遍历手牌获取相同的麻将牌序号并记录下标
        {
            if(HandTail[n].num == w)
            {
               k = n;
            }
        }

        GameObject.Destroy(newEmptytile);
        PutTailToRiver(HandTailGameObject[k], HandTail[k]);//手牌置入牌河
        Mahjong a = new Mahjong(HandTail[k]);
        Debug.Log(name + "打的牌是" + HandTail[k].tail);
        RemoveTail(k);//移除此牌
        Sort();
        Table.CurrentTile = a;//设置场上被打出牌
        state++;
    }
    public override void CheckMyself(Player CurrentPL)
    {
        if (CanHu())
        {
            HU = true;
        }
        if (CanPeng())
        {
            if (FakePeng())
            {
                PENG = true;
            }

        }
        if (CanGang())
        {
            if (FakeGang())
            {
                GANG = true;
            }
        }
        if (CanEat() && (CurrentPL.position + 1) % 4 == position)
        {
            Debug.Log(name+"能吃能吃");
            EAT = FakeEat();//1左吃2中吃3右吃
        }


        Response = true;

        //throw new System.NotImplementedException();
    }
    public override void CheckHandTail()
    {

        if (CanZiMo())
        {
            ZIMO = true;
        }
        if (CanAnGang())
        {
            if (FakeAnGang())
            {
                ANGANG = true;
            }

        }
        Response = true;
    }
    public int AIPlay(List<Mahjong> Input)
    {
        Node input = new Node(Input);
        int record = -1;//记录打出牌的序号
        int max = -1;//最大评估价值
        int value = -1;//手牌评估价值
        for (int k = 0; k < input.NodeTail.Count; k++)//遍历每张手牌被打出后的手牌评估价值   
        {
            Node CopyInput = new Node(input);//拷贝状态节点
            CopyInput.NodeTail.RemoveAt(k);  //打出第k张牌
            value = Estimate(CopyInput).NodeValue;//出牌后的手牌价值
            if (value > max)//记录最大价值
            {
                max = value;
                record = input.NodeTail[k].num;
            }
        }
        if (max > 0)
        {
           return record;
        }  
        else
        {
            return 0;
        }
    }
    //==================================node
    class Node
    {
        public List<Mahjong> NodeTail = new List<Mahjong>();//当前手牌
        public int offset = 0;
        public int KeNum = 0;//刻子和顺子的数量
        public int NodeValue;//此节点价值
        public List<Mahjong> original = new List<Mahjong>();
        public Node(List<Mahjong> input)
        {
            for (int n = 0; n < input.Count; n++)
            {
                this.NodeTail.Add(new Mahjong(input[n]));
                original.Add(new Mahjong(input[n]));
            }
        }
        public Node(Node input)
        {
            for (int n = 0; n < input.NodeTail.Count; n++)
            {
                this.NodeTail.Add(new Mahjong(input.NodeTail[n]));
            }
            //this.NodeTail = new List<Mahjong>(input.NodeTail);
            //Debug.Log("node内部" + this. NodeTail[0].TotalValue);
            this.KeNum = input.KeNum;
            this.NodeValue = 0;
            this.offset = input.offset;
            for (int n = 0; n < input.original.Count; n++)
            {
                this.original.Add(new Mahjong(input.original[n]));
            }

            //for (int n = 0; n < input.NodeTail.Count; n++)
            //{
            //    this.NodeTail.Add(new Mahjong(input.NodeTail[n]));
            //}
            //this.NodeTail = input.NodeTail;
        }
        public Node()
        {

        }
        public void PrintNodeTail()
        {
            string a = null;
            for (int k = 0; k < NodeTail.Count; k++)
            {
                a = a + "-" + NodeTail[k].tail;
            }
            Debug.Log("NodeTail的牌" + a);
            Debug.Log("nodevalue是" + NodeValue);
        }

        int TailInHandNum(List<Mahjong> handtail, Mahjong input)//返回手牌中某牌数量
        {
            int num = 0;
            for (int k = 0; k < handtail.Count; k++)
            {
                if (handtail[k].num == input.num)
                {
                    num++;
                }
            }
            return num;
        }

        public void SetSelfValue()
        {
            for (int k = 0; k < NodeTail.Count; k++)
            {
                NodeTail[k].SetWaitTailNum();
                 //价值等于  总待牌数-场上存在待牌数 -手中待牌数
                NodeTail[k].SelfValue = NodeTail[k].WaitTailNum - Table.ExitWaitNum(NodeTail[k])-TailInHandNum(original, NodeTail[k]);
            }
        }//设置自身价值
        public void SetTotalValue()
        {
            //NodeTail.Sort((x, y) => { return x.num.CompareTo(y.num); });//排序从小到大
            for (int k = 0; k < NodeTail.Count; k++)
            {
                bool left1 = true, left2 = true, right1 = true, right2 = true;
                //NodeTail[k].TotalValue += NodeTail[k].SelfValue;
                for (int q = 0; q < NodeTail.Count; q++)
                {
                    if (NodeTail[k].TailType != Mahjong.Type.Feng && NodeTail[k].TailType != Mahjong.Type.Zi
                        && NodeTail[q].TailType != Mahjong.Type.Feng && NodeTail[q].TailType != Mahjong.Type.Zi)
                    {
                        if (NodeTail[k].num == NodeTail[q].num + 2 && NodeTail[k].TailType == NodeTail[q].TailType && left2)
                        {
                            left2 = false;
                            NodeTail[k].TotalValue = NodeTail[k].TotalValue + NodeTail[q].SelfValue / 2;
                            //Debug.Log(NodeTail[k].tail + "这张牌left2的Totalvalue是" + NodeTail[k].TotalValue);
                        }
                        if (NodeTail[k].num == NodeTail[q].num + 1 && NodeTail[k].TailType == NodeTail[q].TailType && left1)
                        {
                            left1 = false;
                            NodeTail[k].TotalValue = NodeTail[k].TotalValue + NodeTail[q].SelfValue;
                            //Debug.Log(NodeTail[k].tail + "这张牌left1的Totalvalue是" + NodeTail[k].TotalValue);
                        }
                        if (NodeTail[k].num == NodeTail[q].num - 1 && NodeTail[k].TailType == NodeTail[q].TailType && right1)
                        {
                            right1 = false;
                            NodeTail[k].TotalValue = NodeTail[k].TotalValue + NodeTail[q].SelfValue;
                            //Debug.Log(NodeTail[k].tail + "这张牌right1的Totalvalue是" + NodeTail[k].TotalValue);
                        }
                        if (NodeTail[k].num == NodeTail[q].num - 2 && NodeTail[k].TailType == NodeTail[q].TailType && right2)
                        {
                            right2 = false;
                            NodeTail[k].TotalValue = NodeTail[k].TotalValue + NodeTail[q].SelfValue / 2;
                            //Debug.Log(NodeTail[k].tail + "这张牌right2的Totalvalue是" + NodeTail[k].TotalValue);
                        }
                        if (NodeTail[k].num == NodeTail[q].num && NodeTail[k].TailType == NodeTail[q].TailType)
                        {
                            NodeTail[k].TotalValue = NodeTail[k].TotalValue + NodeTail[q].SelfValue;
                            //Debug.Log(NodeTail[k].tail + "这张牌self的Totalvalue是" + NodeTail[k].TotalValue);
                        }
                    }
                    else
                    {
                        if (NodeTail[k].num == NodeTail[q].num && NodeTail[k].TailType == NodeTail[q].TailType)
                        {
                            NodeTail[k].TotalValue = NodeTail[k].TotalValue + NodeTail[q].SelfValue;
                        }

                    }
                }
                //Debug.Log(NodeTail[k].tail + "这张牌的Selfvalue是" + NodeTail[k].SelfValue);
               //Debug.Log(NodeTail[k].tail + "这张牌的Totalvalue是" + NodeTail[k].TotalValue);

            }
        }//设置关联价值
        public void CalculateValue()//h1(n)
        {

            for (int k = 0; k < NodeTail.Count; k++)
            {

                NodeValue = NodeValue + NodeTail[k].SelfValue + NodeTail[k].TotalValue;
                //Debug.Log("NodeValue" + k + "的值是" + NodeValue);
            }


        }//计算总价
        public void CalculateKeShunValue()
        {
            NodeValue += 1000 * KeNum;
        }
        public bool CanHuPai2(List<Mahjong> handtail, Mahjong input)
        {
            List<int> NewHandtail = new List<int>(handtail.Count);
            for (int q = 0; q < handtail.Count; q++)
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
                    if (HuPaiPanDin2(CopyTail))//进行胡牌判定
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

        public bool HuPaiPanDin2(List<int> mahs)
        {
            if (mahs.Count == 0) { return true; }//如果不剩下牌，则返回true
            List<int> fs = mahs.FindAll(delegate (int a)//获取当前第一张牌的个数
            {
                return mahs[0] == a;
            });

            //组成刻子
            if (fs.Count == 3)
            {
                mahs.Remove(mahs[0]);
                mahs.Remove(mahs[0]);
                mahs.Remove(mahs[0]);
                return HuPaiPanDin2(mahs);////去掉刻子后进行递归
            }
            else
            { //组成顺子
                Mahjong a = new Mahjong(mahs[0]);
                Mahjong b = new Mahjong(mahs[0] + 1);
                Mahjong c = new Mahjong(mahs[0] + 2);
                if (mahs.Contains(b.num) && mahs.Contains(c.num) && a.TailType == b.TailType && b.TailType == c.TailType && a.TailType != Mahjong.Type.Feng && a.TailType != Mahjong.Type.Zi)
                {
                    mahs.Remove(mahs[0] + 2);
                    mahs.Remove(mahs[0] + 1);
                    mahs.Remove(mahs[0]);

                    return HuPaiPanDin2(mahs);//去掉顺子后进行递归
                }
                return false;
            }

        }
        public void CalculateDuiValue()//计算对子价值h3(n)
        {
            bool once = true;
            List<int> NewHandtail = new List<int>(NodeTail.Count);
            for (int q = 0; q < NodeTail.Count; q++)
            {
                NewHandtail.Add(NodeTail[q].num);
            }
            for (int n = 0; n < NewHandtail.Count; n++)
            {
                List<int> ds = NewHandtail.FindAll(delegate (int d) { return NewHandtail[n] == d; });
                if (ds.Count == 2)//
                {
                    once = false;
                }
            }
            if (!once)
            {
                Debug.Log("有对子");
                NodeValue += 500;
            }


        }
        public void CalculateTingValue()
        {
            int TingNum = 0;
            for (int n = 0; n < MaJongManager.GetMJmanager().GetMahjongs().Count; n++)
            {
                
                //TingNode.NodeTail.Add(MaJongManager.GetMJmanager().GetMahjongs()[n]);
                if (CanHuPai2(NodeTail, MaJongManager.GetMJmanager().GetMahjongs()[n]))
                {

                    TingNum = TingNum + (4 - Table.RiverHasTailNum(MaJongManager.GetMJmanager().GetMahjongs()[n]));
                }
            }
            NodeValue = NodeValue + 5000 * TingNum;
        }//计算听牌价值h4(n)

        public void SetNodeValue()//计算此状态结点价值
        {
            //h1(n)
            SetSelfValue();
            //Debug.Log("nodevalue1zz" + NodeValue);
            SetTotalValue();
            //Debug.Log("nodevalue2zz" + NodeValue);
            CalculateValue();
            //Debug.Log("nodevalue3zz" + NodeValue);
            //h2(n)
            CalculateKeShunValue();
            //Debug.Log("nodevalue4zzz" + NodeValue);
            //h3(n)
            CalculateDuiValue();
            //h4(n)
            CalculateTingValue();
           
            //Debug.Log("nodevalue是" + NodeValue);
        }

    }
    //==================================node
    bool FakeAnGang()//xxxxxxxxxxxx
    {
        Node input = new Node(HandTail);
        input = SearchNodeTail(input);
        int record = -1;
        List<int> NewHandtail = new List<int>(HandTail.Count);
        for (int q = 0; q < HandTail.Count; q++)
        {

            NewHandtail.Add(HandTail[q].num);
        }
        for (int i = 0; i < NewHandtail.Count; i++)
        {
            List<int> ds = NewHandtail.FindAll(delegate (int d) { return NewHandtail[i] == d; });
            if (ds.Count > 3)//
            {
                record = ds[0];
            }
        }


        List<int> NewHandtail2 = new List<int>(input.NodeTail.Count);
        for (int q = 0; q < input.NodeTail.Count; q++)
        {
            NewHandtail2.Add(input.NodeTail[q].num);
        }
        for (int i = 0; i < input.NodeTail.Count; i++)
        {
            List<int> ds = NewHandtail2.FindAll(delegate (int d) { return NewHandtail2[i] == d; });
            if (ds.Count != 2&& ds.Count !=0&& ds[0]== record)//
            {
                return true;
            }
        }
        return false;


    }
    bool FakeGang()
    {
        Node input = new Node(HandTail);
        input = SearchNodeTail(input);
        input.PrintNodeTail();
        int num = 0;
        for (int k = 0; k < input.NodeTail.Count; k++)
        {
            if (input.NodeTail[k].num == Table.CurrentTile.num)
            {
                num++;
            }


        }

        if (num != 0)//说明有其他对象占用
        {
            return false;
        }

        else
            return true;
    }
    bool FakePeng()
    {
        Node input = new Node(HandTail);
        input = SearchNodeTail(input);
        input.PrintNodeTail();
        int num = 0;
        for (int k = 0; k < input.NodeTail.Count; k++)
        {
            if (input.NodeTail[k].num == Table.CurrentTile.num)
            {
                num++;
            }


        }

        if(num ==2 )
        {
            return true;
        }
     
        else
        return false;
    }
    int FakeEat()
    {
        List<Mahjong> SameColor = new List<Mahjong>(HandTail.Count);
        for (int i = 0; i < HandTail.Count; i++)
        {
            if (HandTail[i].TailType == Table.CurrentTile.TailType)
            {
                SameColor.Add(HandTail[i]);
            }
        }
        Node input = new Node(HandTail)//同花色手牌,保留original
        {
            NodeTail = SameColor
        };

        //int totalvalue = 0;
        //for (int k = 0; k < MaJongManager.GetMJmanager().GetTotalMahjongs().Count; k++)
        //{
        //    Node AddColor = new Node(input);
        //    //Debug.Log( "k的数量" + k);
        //    if (MaJongManager.GetMJmanager().GetTotalMahjongs()[k].TailType == Table.CurrentTile.TailType)
        //    {
        //        AddColor.NodeTail.Add(MaJongManager.GetMJmanager().GetTotalMahjongs()[k]);//每种花色加一次
        //        AddColor = SearchNodeTail(AddColor);
        //        Debug.Log("加了" + MaJongManager.GetMJmanager().GetTotalMahjongs()[k].tail);
        //        AddColor.PrintNodeTail();
        //        totalvalue += AddColor.NodeValue;
        //    }
        //}
        //int Meanvalue = totalvalue / 9;
        //float fangcha=0;
        //for(int n=0;n< fangchalist.Count;n++)
        //{
        //    fangcha+=Mathf.Pow(fangchalist[n].NodeValue - Meanvalue, 2);
        //}
        //fangcha = Mathf.Sqrt(fangcha / fangchalist.Count);

        Node copy = new Node(input);
        copy = SearchNodeTail(copy);//同花色的各种组合
        copy.PrintNodeTail();
        //Debug.Log("meanvalue" + Meanvalue);

        int avalue = 0;
        int bvalue = 0;
        int cvalue = 0;
        //bool lefteat = false;
        //bool middleeat = false;
        //bool righteat = false;
        for (int q = 0; q < 3; q++)
        {
            Node newnode = new Node(input);
            bool a = false;
            bool b = false;
            Mahjong record1 = null;
            Mahjong record2 = null;
            //int quanzhong = 0;
            if (q == 0)//左吃
            {
                Debug.Log("0000000111111111");
                for (int n = 0; n < newnode.NodeTail.Count; n++)
                {
                    if (newnode.NodeTail[n].num == Table.CurrentTile.num - 2 && !a && newnode.NodeTail[n].TailType == Table.CurrentTile.TailType
                        && newnode.NodeTail[n].TailType != Mahjong.Type.Feng && newnode.NodeTail[n].TailType != Mahjong.Type.Zi)
                    {
                        a = true;
                        record1 = newnode.NodeTail[n];
                    }
                    if (newnode.NodeTail[n].num == Table.CurrentTile.num - 1 && !b && newnode.NodeTail[n].TailType == Table.CurrentTile.TailType
                        && newnode.NodeTail[n].TailType != Mahjong.Type.Feng && newnode.NodeTail[n].TailType != Mahjong.Type.Zi)
                    {
                        b = true;
                        record2 = newnode.NodeTail[n];
                    }

                }
                if (a && b)
                {
                    bool remove1 = false;
                    bool remove2 = false;
                    Debug.Log("aaaaaaaaaa");
                    for (int n = 0; n < newnode.NodeTail.Count; n++)
                    {
                        if (newnode.NodeTail[n] == record1 && !remove1)
                        {
                            remove1 = true;
                            newnode.NodeTail.Remove(record1);
                        }
                        if (newnode.NodeTail[n] == record2 && !remove2)
                        {
                            remove2 = true;
                            newnode.NodeTail.Remove(record2);
                        }
                    }
                    //Debug.Log("吃完展示手牌↓");
                    //newnode.PrintNodeTail();
                    newnode.KeNum++;
                    Debug.Log("newnode的kenum" + newnode.KeNum + "input的kenum" + copy.KeNum);
                    Node accept = SearchNodeTail(newnode);
                    //accept.PrintNodeTail();
                    if (accept.KeNum > copy.KeNum)
                    {
                        avalue = accept.NodeValue;
                        //lefteat = true;
                    }
                    //else
                    //{


                    //    if (accept.NodeValue > Meanvalue)
                    //    {
                    //        avalue = accept.NodeValue;
                    //    }
                    //    //bool judge = IsBadEat(accept, Table.CurrentTile.num);
                    //    //if(!judge)
                    //    //{
                    //    //    avalue = accept.NodeValue;
                    //    //}
                    //}
                }
            }
            else if (q == 1)
            {
                Debug.Log("00000000000022222222222222");
                for (int n = 0; n < newnode.NodeTail.Count; n++)
                {
                    if (newnode.NodeTail[n].num == Table.CurrentTile.num - 1 && !a && newnode.NodeTail[n].TailType == Table.CurrentTile.TailType
                        && newnode.NodeTail[n].TailType != Mahjong.Type.Feng && newnode.NodeTail[n].TailType != Mahjong.Type.Zi)
                    {
                        a = true;
                        record1 = newnode.NodeTail[n];
                    }
                    if (newnode.NodeTail[n].num == Table.CurrentTile.num + 1 && !b && newnode.NodeTail[n].TailType == Table.CurrentTile.TailType
                        && newnode.NodeTail[n].TailType != Mahjong.Type.Feng && newnode.NodeTail[n].TailType != Mahjong.Type.Zi)
                    {
                        b = true;
                        record2 = newnode.NodeTail[n];
                    }

                }
                if (a && b)
                {
                    bool remove1 = false;
                    bool remove2 = false;
                    Debug.Log("bbbbbbbbbbbbb");
                    for (int n = 0; n < newnode.NodeTail.Count; n++)
                    {
                        if (newnode.NodeTail[n] == record1 && !remove1)
                        {
                            remove1 = true;
                            newnode.NodeTail.Remove(record1);
                        }
                        if (newnode.NodeTail[n] == record2 && !remove2)
                        {
                            remove2 = true;
                            newnode.NodeTail.Remove(record2);
                        }
                    }
                    //Debug.Log("吃完展示手牌↓");
                    //newnode.PrintNodeTail();
                    newnode.KeNum++;
                    Debug.Log("newnode的kenum" + newnode.KeNum + "input的kenum" + copy.KeNum);
                    Node accept = SearchNodeTail(newnode);
                    //accept.PrintNodeTail();
                    if (accept.KeNum > copy.KeNum)
                    {
                        bvalue = accept.NodeValue;
                        //lefteat = true;
                    }
                    //else
                    //{
                    //    //bool judge = IsBadEat(accept, Table.CurrentTile.num);
                    //    //if (!judge)
                    //    //{
                    //    //    bvalue = accept.NodeValue;
                    //    //}
                    //    if (accept.NodeValue > Meanvalue)
                    //    {
                    //        bvalue = accept.NodeValue;
                    //    }
                    //}
                }
            }
            else if (q == 2)
            {
                Debug.Log("00000000000003333333");
                for (int n = 0; n < newnode.NodeTail.Count; n++)
                {
                    if (newnode.NodeTail[n].num == Table.CurrentTile.num + 1 && !a && newnode.NodeTail[n].TailType == Table.CurrentTile.TailType
                        && newnode.NodeTail[n].TailType != Mahjong.Type.Feng && newnode.NodeTail[n].TailType != Mahjong.Type.Zi)
                    {
                        a = true;
                        record1 = newnode.NodeTail[n];
                    }
                    if (newnode.NodeTail[n].num == Table.CurrentTile.num + 2 && !b && newnode.NodeTail[n].TailType == Table.CurrentTile.TailType
                        && newnode.NodeTail[n].TailType != Mahjong.Type.Feng && newnode.NodeTail[n].TailType != Mahjong.Type.Zi)
                    {
                        b = true;
                        record2 = newnode.NodeTail[n];
                    }

                }
                if (a && b)
                {
                    bool remove1 = false;
                    bool remove2 = false;
                    Debug.Log("ccccccccccccc");
                    for (int n = 0; n < newnode.NodeTail.Count; n++)
                    {
                        if (newnode.NodeTail[n] == record1 && !remove1)
                        {
                            remove1 = true;
                            newnode.NodeTail.Remove(record1);
                        }
                        if (newnode.NodeTail[n] == record2 && !remove2)
                        {
                            remove2 = true;
                            newnode.NodeTail.Remove(record2);
                        }
                    }
                    //Debug.Log("吃完展示手牌↓");
                    //newnode.PrintNodeTail();
                    newnode.KeNum++;
                    Debug.Log("newnode的kenum" + newnode.KeNum + "input的kenum" + copy.KeNum);
                    Node accept = SearchNodeTail(newnode);
                    //accept.PrintNodeTail();
                    if (accept.KeNum > copy.KeNum)
                    {
                        cvalue = accept.NodeValue;
                        //lefteat = true;
                    }
                    //else
                    //{
                    //    //bool judge = IsBadEat(accept, Table.CurrentTile.num);
                    //    //if (!judge)
                    //    //{
                    //    //    cvalue = accept.NodeValue;
                    //    //}
                    //    if (accept.NodeValue > Meanvalue)
                    //    {
                    //        cvalue = accept.NodeValue;
                    //    }
                    //}
                }
            }



        }
        //Debug.Log("inputvalue" + Meanvalue + "avalue" + avalue + "bvalue" + bvalue + "cvalue" + cvalue +
        //    "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
        Debug.Log( "avalue" + avalue + "bvalue" + bvalue + "cvalue" + cvalue +
          "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
        if (avalue > copy.NodeValue && avalue > bvalue && avalue > cvalue)
        {
            return 1;
        }
        else if (bvalue > copy.NodeValue && bvalue > avalue && bvalue > cvalue)
        {
            return 2;
        }
        else if (cvalue > copy.NodeValue && cvalue > avalue && cvalue > bvalue)
        {
            return 3;
        }
        //if (avalue > Meanvalue && avalue >= bvalue && avalue >= cvalue)
        //{
        //    return 1;
        //}
        //else if (bvalue > Meanvalue && bvalue >= avalue && bvalue >= cvalue)
        //{
        //    return 2;
        //}
        //else if (cvalue > Meanvalue && cvalue >= avalue && cvalue >= bvalue)
        //{
        //    return 3;
        //}
        else
            return 0;

    }

    bool IsBadEat(Node input,int MahjongNum)
    {
        int left2 = 0, left1=0,self=0,right1=0,right2=0;
        for(int n=0;n<input.NodeTail.Count;n++)
        {
            if(input.NodeTail[n].num+2==MahjongNum)
            {
                left2++;
            }
            if (input.NodeTail[n].num + 1 == MahjongNum)
            {
                left1++;
            }
            if (input.NodeTail[n].num  == MahjongNum)
            {
                self++;
            }
            if (input.NodeTail[n].num-1 == MahjongNum)
            {
                right1++;
            }
            if (input.NodeTail[n].num-2 == MahjongNum)
            {
                right2++;
            }
        }
        //if()
        return false;
    }
    Node Estimate(Node input)//评价函数
    {
        Node newnode = SearchNodeTail(input);
        return newnode;

    }


    int HasKeShun(Node input,int index)//只计算手牌NodeTail的前三个,index为从第几个开始算
    {
        bool peng = false;
        bool chi = false;
        List<Mahjong> fs = input.NodeTail.FindAll(delegate (Mahjong d)
        {
            return input.NodeTail[index].num == d.num;
        });
        if (fs.Count == 3)
        {
            peng = true;
            //input.PrintNodeTail();
            //Debug.Log("index" + index + "能成刻子"+ input.NodeTail[index].num);
        }
        bool a = false, b = false;

        for (int q = index; q < input.NodeTail.Count; q++)
        {
            if (input.NodeTail[index].num + 1 == input.NodeTail[q].num && input.NodeTail[index].TailType == input.NodeTail[q].TailType &&
                input.NodeTail[index].TailType != Mahjong.Type.Zi && input.NodeTail[index].TailType != Mahjong.Type.Feng)
            {
                a = true;
            }
            if (input.NodeTail[index].num + 2 == input.NodeTail[q].num && input.NodeTail[index].TailType == input.NodeTail[q].TailType &&
             input.NodeTail[index].TailType != Mahjong.Type.Zi && input.NodeTail[index].TailType != Mahjong.Type.Feng)
            {
                b = true;
            }
     
        }

        if (a && b)
        { chi = true;
            //input.PrintNodeTail();
            //Debug.Log("index" + index + "能成顺子" + input.NodeTail[index].tail + (input.NodeTail[index].num + 1) + (input.NodeTail[index].num + 2));
        }
        if(peng && !chi)//只能刻
        {return 1; }
        else if(!peng && chi)//只能顺
        { return 2; }
        else if(peng &&chi)//刻和顺都行
        { return 3;}
        else return 0;//没有刻子顺子了
    }
    bool SearchTailKeShun(Node input)
    {
        bool nokeshun = true;
        for(int n=0;n<input.NodeTail.Count;n++)
        {
            if (HasKeShun(input, n) != 0)
            {
                nokeshun = false ;
            }
        }
        return nokeshun;
    }
    Node FindMaxFn(List<Node> input)
    {
        input.Sort((x, y) => { return y.NodeValue.CompareTo(x.NodeValue); });
        for(int n=0;n<input.Count;n++)
        {
            //Debug.Log("第" + n + "个openlist的元素的价值" + input[n].NodeValue);
        }
        return input[0];
    }
    Node SearchNodeTail(Node input)
    {
        List<Node> openlist = new List<Node>();
        List<Node> closelist = new List<Node>();
        Node copy = new Node(input);
        openlist.Add(copy);
        while(openlist.Count>0)
        {
            Node maxFn = FindMaxFn(openlist);
            maxFn.NodeTail.Sort((x, y) => { return x.num.CompareTo(y.num); });//排序从小到大
            if (SearchTailKeShun(maxFn) == true)//如果结点牌没有顺子和刻子了
            {
                Debug.Log("没有顺子刻子返回了");
                if(maxFn.NodeValue==0)
                {
                    maxFn.SetNodeValue();

                }
                //
                return maxFn;
            }
            openlist.Remove(maxFn);
            closelist.Add(maxFn);
            int TailType=-1;
            int count = 0;
            int num=-1;
            while (count < maxFn.NodeTail.Count)
            {

                if (maxFn.NodeTail[count].num != num)
                {
                    num = maxFn.NodeTail[count].num;
                    TailType = HasKeShun(maxFn, count);
                    if (TailType == 1)//只有刻子
                    {
                        Node newnode = new Node(maxFn);
                        newnode.NodeTail.RemoveAt(count);
                        newnode.NodeTail.RemoveAt(count);
                        newnode.NodeTail.RemoveAt(count);
                        newnode.KeNum++;
                        Debug.Log("1111111");
                        newnode.SetNodeValue();
                        //newnode.PrintNodeTail();
                       
                        openlist.Add(newnode);
                    }
                    if (TailType == 2)//只有顺子
                    {
                        Mahjong a = new Mahjong();
                        Mahjong b = new Mahjong();
                        Node newnode = new Node(maxFn);
                        for (int n = count; n < newnode.NodeTail.Count; n++)
                        {
                            if (newnode.NodeTail[n].num == newnode.NodeTail[count].num + 1)
                            {
                                a = newnode.NodeTail[n];
                            }
                            if (newnode.NodeTail[n].num == newnode.NodeTail[count].num + 2)
                            {
                                b = newnode.NodeTail[n];
                            }
                        }
                        newnode.NodeTail.Remove(b);
                        newnode.NodeTail.Remove(a);
                        newnode.NodeTail.Remove(newnode.NodeTail[count]);
                        newnode.KeNum++;
                        newnode.SetNodeValue();
                        Debug.Log("2222222222");
                        //newnode.PrintNodeTail();
                        openlist.Add(newnode);
                    }
                    if (TailType == 3)
                    {
                        Node newnode1 = new Node(maxFn);
                        Node newnode2 = new Node(maxFn);
                        newnode1.NodeTail.RemoveAt(count);
                        newnode1.NodeTail.RemoveAt(count);
                        newnode1.NodeTail.RemoveAt(count);
                        newnode1.KeNum++;
                        newnode1.SetNodeValue();
                        Debug.Log("33333333aaaa");
                        //newnode1.PrintNodeTail();
                        openlist.Add(newnode1);
                        Mahjong a = new Mahjong();
                        Mahjong b = new Mahjong();
                        for (int n = 0; n < newnode2.NodeTail.Count; n++)
                        {
                            if (newnode2.NodeTail[n].num == newnode2.NodeTail[count].num + 1)
                            {
                                a = newnode2.NodeTail[n];
                            }
                            if (newnode2.NodeTail[n].num == newnode2.NodeTail[count].num + 2)
                            {
                                b = newnode2.NodeTail[n];
                            }
                        }
                        newnode2.NodeTail.Remove(b);
                        newnode2.NodeTail.Remove(a);
                        newnode2.NodeTail.Remove(newnode2.NodeTail[count]);
                        newnode2.KeNum++;
                        newnode2.SetNodeValue();
                        Debug.Log("333333bbbbbbb");
                        newnode2.PrintNodeTail();
                        openlist.Add(newnode2);
                    }

                    else
                    {
                        count++;
                    }

                }
               else
                {
                    Debug.Log("qqqqqqqqqq");
                    count++;
                }
            } 

        }
        return null;
    }



}


