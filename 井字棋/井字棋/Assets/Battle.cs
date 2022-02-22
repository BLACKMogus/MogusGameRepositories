using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Battle : MonoBehaviour
{

    public static GameObject empty;
    public static GameObject Mask;
    public static GameObject computerwin;
    public static GameObject playerwin;
    public static GameObject together;
    void Start()
    {
        empty = GameObject.FindGameObjectWithTag("Empty");
        computerwin = GameObject.FindGameObjectWithTag("ComWin");
        playerwin = GameObject.FindGameObjectWithTag("PlayerWin");
        together = GameObject.FindGameObjectWithTag("Together");
        empty.SetActive(false);
        playerwin.SetActive(false);
        computerwin.SetActive(false);
        together.SetActive(false);

    }


    // Update is called once per frame
    void Update() {

    }
    public static void Show(int i)
    {
        empty.SetActive(true);
        if (i==1)
        {
            playerwin.SetActive(true);
        }
        else if (i==2)
        {
            computerwin.SetActive(true);
        }
        else if(i==0)
        {
            together.SetActive(true);
        }
    }
    public void MaskOnClick()
    {

        playerwin.SetActive(false);
        computerwin.SetActive(false);
        together.SetActive(false);
        empty.SetActive(false);
        MainFunction.GetInstance().Start();
    }
   
}
