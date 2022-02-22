using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player {
    static Player player;
    public static Player GetPlayer()
    {
        if (player == null)
        {
            player = new Player();
            return player;
        }
        else return player;
    }

    public bool isfirst=true;

}
