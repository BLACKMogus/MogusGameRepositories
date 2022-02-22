using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIManager {
    
    public static GameObject GetGameObject(string name)
    {
        Dictionary<string, GameObject> UIitem = new Dictionary<string, GameObject>
        {
             {"CardFront",GameObject.Find("CardFront") },//场景牌的正面
             {"CardBack",GameObject.Find("CardBack") },//场景牌反面
             {"MyCardFront",GameObject.Find("MyCardFront") },//战斗手卡正面
             {"MyCardBack",GameObject.Find("MyCardBack") },//战斗手卡反面
             {"CardScroll",GameObject.Find("CardScroll") },//显示牌组的整个父类平面
             {"ShowCardPanel",GameObject.Find("ShowCardPanel") },//显示牌组的子类内容
             {"LeftDescription",GameObject.Find("LeftDescription") },//场景牌左描述
             {"RightDescription",GameObject.Find("RightDescription") },//场景牌右描述
             {"Description",GameObject.Find("Description") },//卡牌描述
             {"CharacterHP",GameObject.Find("CharacterHP") },//玩家血条
             {"leftdescription",GameObject.Find("leftdescription") },//战斗手牌左描述（+盾
             {"rightdescription",GameObject.Find("rightdescription") },//战斗手牌右描述（功能
             {"MyCards",GameObject.Find("MyCards") },//初始化战斗卡牌
             {"Canvas",GameObject.Find("Canvas") },//画布
              {"Panel",GameObject.Find("ScenePanel") },//  场景卡翻转对象
             {"MonsterHP",GameObject.Find("MonsterHP") },//  
             {"PlayerAP",GameObject.Find("PlayerAP") },//  
              {"PlayerHP",GameObject.Find("PlayerHP") },// 
              {"PlayerShield",GameObject.Find("PlayerShield") },
              {"PlayerHandCards",GameObject.Find("PlayerHandCards") },//  
               {"UseCardDes",GameObject.Find("UseCardDes") },//  
        };
        return UIitem[name];
    }

}
