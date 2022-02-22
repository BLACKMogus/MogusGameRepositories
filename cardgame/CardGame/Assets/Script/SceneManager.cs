using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SceneManager
{
    //单例
    static SceneManager sceneManager;
    public static SceneManager GetSceneManager()
    {
        if (sceneManager == null)
        {
            sceneManager = new SceneManager();
            return sceneManager;
        }
        else
            return sceneManager;
    }
  

}
public class VillageCard:SceneCard
{
    public VillageCard(Sprite a, string discription,string left, string right, Stament c) : base(a, discription, left, right,c)
    {
        
    }
    public static Dictionary<string, VillageCard> SceneAssemble = new Dictionary<string, VillageCard>
        {//有序事件，带Stament
            { "MeetVillage", new VillageCard(PicManager.GetPic("MeetVillage"), "遇到一个村庄，进去吗？", "进去", "路过",SceneCard.Stament.one) },
          //  { "VillageTwo1", new VillageCard(PicManager.GetpicManager().GetPic("VillageTwo1"), "遇到山贼在侵略这里",   "帮助村民","帮助山贼",SceneCard.Stament.two) },

        };
}
public class MeetPeopleCard : SceneCard
{
    public MeetPeopleCard(Sprite a, string discription, string left, string right) : base(a, discription, left, right)
    {
        
    }
    public static Dictionary<string, MeetPeopleCard> MeetPeopleCardAssemble = new Dictionary<string, MeetPeopleCard>
        {//有序事件，带Stament

            { "MeetBastard", new MeetPeopleCard(PicManager.GetPic("Bastard"), "遇到山贼在侵略这里",   "帮助村民","帮助山贼") },
             { "MeetMerchant", new MeetPeopleCard(PicManager.GetPic("MeetMerchant"), "遇到行进中的商人",   "购买","离开") },
        };
}