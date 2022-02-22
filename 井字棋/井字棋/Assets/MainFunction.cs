using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainFunction 
{
   // public GameObject empty;
  //  public GameObject mask = GameObject.Find("Mask");

    static MainFunction mainFunction;
    public static MainFunction GetInstance()
    {
        if (mainFunction == null)
        {
            mainFunction = new MainFunction();
            return mainFunction;
        }
        else
            return mainFunction;

    }
    static Grid[] Grids;
    static GameObject[] GridsGame;
    public static int[,] Matrix = new int[3, 3];
    //进行初始化
    public void Start()
    {
      //  empty = GameObject.FindGameObjectWithTag("Empty");
      //  empty.SetActive(false);
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                Matrix[i, j] = 0;
            }
        }
        GridsGame = GameObject.FindGameObjectsWithTag("Grid");
        Grids = new Grid[GridsGame.Length];
        for (int i = 0; i < GridsGame.Length; i++)
        {
            Grids[i] = new Grid(GridsGame[i], GridsGame[i].transform.Find("O"), GridsGame[i].transform.Find("X"), GridsGame[i].transform.Find("Back"));
            Grids[i].OImg.gameObject.SetActive(false);
            Grids[i].XImg.gameObject.SetActive(false);
            Grids[i].back.gameObject.SetActive(false);
        }
    }

    public static Grid GetGrid(int a, int b)
    {
        string name = a + "," + b;
        foreach (Grid grid in Grids)
        {
            if (grid.myself.name == name)
            {
                // Debug.Log(grid.myself);
                return grid;

            }
        }
        return null;
    }
    public void SetMatrix(bool isplayer, int position1, int position2, bool isplayerfirst)//下棋是O是X
    {
        if (isplayer==true && Matrix[position1, position2]==0)
        {
            Matrix[position1, position2] = 1;//1为玩家下的
            Grid PersonGrid = GetGrid(position1, position2);
            //Transform font;
            // Debug.Log(grid.transform.GetChild(1));
            if (isplayerfirst == true)
            {
                //   Debug.Log(grid.OImg.name);
               
                PersonGrid.OImg.gameObject.SetActive(true);
                PersonGrid.back.gameObject.SetActive(false);
            }
            else
                PersonGrid.XImg.gameObject.SetActive(true);
                PersonGrid.back.gameObject.SetActive(false);
            
        }
        else if(isplayer==false && Matrix[position1, position2] == 0)
        {
            Matrix[position1, position2] = 2;//2为电脑下的
            Grid ComGrid = GetGrid(position1, position2);
            //Transform font;
            // Debug.Log(grid.transform.GetChild(1));
            if (isplayerfirst == true)
            {
                //   Debug.Log(grid.OImg.name);
                ComGrid.XImg.gameObject.SetActive(true);
                ComGrid.back.gameObject.SetActive(false);
            }
            else
                ComGrid.OImg.gameObject.SetActive(true);
                ComGrid.back.gameObject.SetActive(false);
        }
    }


    public void ComputerCheck()//电脑下棋
    {
        int[,] test =new int[3,3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                test[i,j] = Matrix[i,j];
            }
        }

        int[,] valuematrix = new int[3, 3];
        int returnvalue;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (test[i, j] == 0)
                {
                    test[i, j] = 2;
                    returnvalue = EstimatePosition(test,3, -10000, 10000, true);
             //      Debug.Log("i=" + i + "j=" + j + "//ReturnValue=" + returnvalue);
                    valuematrix[i, j] = returnvalue;
                    test[i, j] = 0;
                }
            }
        }
        int a = 0, b = 0;
        int max = -5000;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (valuematrix[i, j] > max && Matrix[i, j] == 0)
                {
                   ////// Debug.Log("i=" + i + "j=" + j + "//矩阵的值" + max);
                    max = valuematrix[i, j];
                    a = i; b = j;
                }
            }
        }
        SetMatrix(false, a, b, Player.GetPlayer().isfirst);
        if(!IsEmpty(Matrix)|| CheckWin(Matrix)==1|| CheckWin(Matrix)==2)
        {
            Debug.Log("电脑胜利");
            Battle.Show(CheckWin(Matrix));
        }

    }

    //计算位置，极大极小搜索+剪枝
    public int EstimatePosition(int[,] matrix,int depth, int a, int b, bool IsplayerTurn)
    {
       
        if (!IsEmpty(matrix) ||depth==0||CheckWin(matrix)!=0)
        {
        //    Debug.Log("评价函数" + ValueEstimate(matrix));
            return ValueEstimate(matrix);
        }
        int[,] copymatrix = matrix;
        if (IsplayerTurn == false)
        {
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (copymatrix[i, j] == 0)
                    {
                        copymatrix[i, j] = 2;
                      
                        a = Mathf.Max(a, EstimatePosition(copymatrix,depth-1, a, b, !IsplayerTurn));
                        copymatrix[i, j] = 0;
                        if (b <= a)
                            break;
                    }
                }
            }
            return a;
        }
        else
        {
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (copymatrix[i, j] == 0)
                    {
                        copymatrix[i, j] = 1;
                        b = Mathf.Min(b, EstimatePosition(copymatrix,depth-1,a,b ,!IsplayerTurn));
                        copymatrix[i, j] = 0;
                        if (b <= a)
                            break;
                    }
                }
            }
            return b;
        }

    }

   
    public bool IsEmpty(int[,] matrix)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if(matrix[i, j] == 0)
                    return true;
            }
        }
        return false;
    }
  
    //估价函数
    public int ValueEstimate(int[,] matrix)
    {
        int score = 0;
        for (int i = 0; i < 3; i++)
        {
            Line HorizontalLine = new Line();
            Line VerticalLine = new Line();
            Line LeftSide = new Line();
            Line RightSide = new Line();

            for (int j = 0; j < 3; j++)
            {
                if (matrix[i, j] == 1)//横排检查
                {
                    HorizontalLine.PlayerNode++;
                }
                else if (Matrix[i, j] == 2)
                {
                    HorizontalLine.ComNode++;
                }
                if (matrix[j, i] == 1)//竖排检查
                {
                    VerticalLine.PlayerNode++;
                }
                else if (matrix[j, i] == 2)
                {
                    VerticalLine.ComNode++;
                }
                if (matrix[j, j] == 1)//左斜检测
                {
                    LeftSide.PlayerNode++;
                }
                else if (matrix[j,j] == 2)
                {
                    LeftSide.ComNode++;
                }
                if (matrix[2-j, j] == 1)//右斜检测
                {
                    RightSide.PlayerNode++;
                }
                else if (matrix[2 - j, j] == 2)
                {
                    RightSide.ComNode++;
                }
            }
            if (HorizontalLine.PlayerNode == 3 || VerticalLine.PlayerNode == 3 || LeftSide.PlayerNode == 3|| RightSide.PlayerNode == 3)
            {
                score -= 1000;
            }
            if (HorizontalLine.ComNode == 3 || VerticalLine.ComNode == 3 || LeftSide.ComNode == 3|| RightSide.ComNode==3)
            {
                score += 1000;
            }
            if (HorizontalLine.PlayerNode == 2 || VerticalLine.PlayerNode == 2 || LeftSide.PlayerNode == 2|| RightSide.PlayerNode==2)
            {
                score -= 100;
            }
            if (HorizontalLine.ComNode == 2 || VerticalLine.ComNode == 2 || LeftSide.ComNode == 2|| RightSide.ComNode==2)
            {
                score += 100;
            }
            if (HorizontalLine.PlayerNode == 1 || VerticalLine.PlayerNode == 1 || LeftSide.PlayerNode == 1|| RightSide.PlayerNode==1)
            {
                score -= 5;
            }
            if (HorizontalLine.ComNode == 1 || VerticalLine.ComNode == 1 || LeftSide.ComNode == 1|| RightSide.ComNode==1)
            {
                score += 5;
            }
        }
      //  Debug.Log("返回评分" + score);
        return score;
    }

    public int CheckWin(int[,] testmatrix)
    {

        for (int i = 0; i < 3; i++)
        {
            Line HorizontalLine = new Line();
            Line VerticalLine = new Line();
            Line LeftSide = new Line();
            Line RightSide = new Line();
            for (int j = 0; j < 3; j++)
            {
                if (testmatrix[i, j] == 1)//横排检查
                {
                    HorizontalLine.PlayerNode++;
                   // Debug.Log("i="+i +"j="+ j + "加了");
                }
                else if (testmatrix[i, j] == 2)
                {
                    HorizontalLine.ComNode++;
                }

                if (testmatrix[j, i] == 1)//竖排检查
                {
                    VerticalLine.PlayerNode++;
                }
                else if (testmatrix[j, i] == 2)
                {
                    VerticalLine.ComNode++;
                }
                if (testmatrix[j, j] == 1)//左斜检测
                {
                    LeftSide.PlayerNode++;
                }
                else if (testmatrix[j, j] == 2)
                {
                    LeftSide.ComNode++;
                }
                if (testmatrix[2-j, j] == 1)//右斜检测
                {
                    RightSide.PlayerNode++;
                }
                else if (testmatrix[2-j,j] == 2)
                {
                    RightSide.ComNode++;
                }
            }
           
            if (HorizontalLine.PlayerNode == 3 || VerticalLine.PlayerNode == 3 || LeftSide.PlayerNode == 3|| RightSide.PlayerNode==3)
            {
                return 1;//playerwin
            }
            if (HorizontalLine.ComNode == 3 || VerticalLine.ComNode == 3 || LeftSide.ComNode == 3 || RightSide.ComNode == 3)
            {
                return 2;// Debug.Log("ComWIN");
            }
            //else
            //    return 3;
           
        }
        return 0;

    }
}
struct Line
{
    public int ComNode;
    public int PlayerNode;
}