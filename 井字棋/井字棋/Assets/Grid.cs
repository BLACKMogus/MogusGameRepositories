using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Grid:Object {
    public GameObject myself;
    public Transform back;
    public  Transform OImg;
    public Transform XImg;
    public Grid(GameObject my, Transform a,Transform b,Transform Back)
    {
        myself = my;
        OImg = a;
        XImg = b;
        back = Back;
    }

}
