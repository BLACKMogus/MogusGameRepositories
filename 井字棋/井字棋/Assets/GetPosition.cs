using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class GetPosition : MonoBehaviour, IPointerClickHandler
{
    Transform CardBack;
    Transform CardFront;

    MainFunction mainFunction;
    void Start()
    {
        mainFunction = MainFunction.GetInstance();
        mainFunction.Start();
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        string[] position = this.gameObject.name.Split(',');
        int a = int.Parse(position[0]);
        int b= int.Parse(position[1]);
        if(MainFunction.Matrix[a,b]==0)
        {
            mainFunction.SetMatrix(true, a, b, Player.GetPlayer().isfirst);
            mainFunction.CheckWin(MainFunction.Matrix);
            mainFunction.ComputerCheck();

        }

    }

    

}
