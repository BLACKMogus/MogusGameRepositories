using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.IO;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using LitJson;
using UnityEngine.Events;
public class TextManager : MonoBehaviour
{
    String savepath ;
    public GameObject DeckPanel;
    public GameObject prefCardDescription;
    static List<String> AllText;
    
    List<GameObject> AllCard;
    // Start is called before the first frame update
    void Start()
    {
        savepath = Application.dataPath+"/JsonCardData.Json";
        AllText = new List<string>();
        AllText = LoadData();
        AllCard = new List<GameObject>();
        if (File.Exists(savepath) == false)
        {
            AllText.Add("其它小炒");AllText.Add("番茄炒蛋");AllText.Add("白切鸡");AllText.Add("三及第汤饭/河粉/米粉");AllText.Add("渔粉");
            AllText.Add("牛肉/排骨面/米粉");AllText.Add("速冻水饺");AllText.Add("韩式拌饭");AllText.Add("寿司拼盘");AllText.Add("日式丼饭");AllText.Add("烧烤");
            AllText.Add("粥&小菜");AllText.Add("港式茶餐厅");AllText.Add("煲仔饭");AllText.Add("肠粉");AllText.Add("炒米粉");AllText.Add("湿炒牛河");
            AllText.Add("关东煮");AllText.Add("面包");AllText.Add("泡面");AllText.Add("螺蛳粉");AllText.Add("抄手");AllText.Add("驴肉火锅");
            AllText.Add("肯德基");AllText.Add("麦当劳");AllText.Add("蛋糕");AllText.Add("冰淇淋");
        }
       
    }

   public static String getRandomOneCard(){
        int RandomNumber =(int)UnityEngine.Random.Range(0,AllText.Count);
        return ("<color='white'>"+AllText[RandomNumber]+"</color>");
    }

    public GameObject Oncebutton;
    public void BtnShowDeck(){

        if(DeckPanel.activeSelf==false){
           Oncebutton.SetActive(false);
           DeckPanel.SetActive(true);
           GameObject.Find("ButtonScript").SendMessage("HideText");
            foreach (String content in AllText)
            {
                GameObject card = GameObject.Instantiate(prefCardDescription);
                card.transform.SetParent(GameObject.FindWithTag("CardContent").transform);
                card.SetActive(true);
                card.transform.GetChild(1).GetComponent<Button>().onClick.AddListener(delegate() {
				this.BtnChange();});
                card.transform.GetChild(2).GetComponent<Button>().onClick.AddListener(delegate() {
				this.BtnDelete();});
                card.transform.Find("Text").GetComponent<Text>().text = "<color='white'>"+content+"</color>";
                AllCard.Add(card);  
            }
        }
        else{
             foreach (GameObject card in AllCard)
             {
                 GameObject.DestroyImmediate(card);
             }
            AllCard.Clear(); 
            Oncebutton.SetActive(true); 
            DeckPanel.SetActive(false);
            GameObject.Find("ButtonScript").SendMessage("ShowText");
            SaveData();
        }
    }
    public InputField inputField;
    public GameObject addbutton;
    public GameObject nobutton;

    public void BtnAddCard(){
        inputField.gameObject.SetActive(true);
        addbutton.SetActive(false);

    }
    public void BtnCancelAdd(){
        inputField.text = "";
        inputField.gameObject.SetActive(false);
        addbutton.SetActive(true);
    }
    GameObject touchcard;
    bool ischange = false;
    public void BtnYesAddCard(){
        AllText.Add(inputField.text);
        addbutton.SetActive(true);  
        GameObject card = GameObject.Instantiate(prefCardDescription);
        card.transform.SetParent(GameObject.FindWithTag("CardContent").transform);
        card.SetActive(true);
        card.transform.GetChild(1).GetComponent<Button>().onClick.AddListener(delegate() {
		this.BtnChange();});
        card.transform.GetChild(2).GetComponent<Button>().onClick.AddListener(delegate() {
        this.BtnDelete();});        
        card.transform.Find("Text").GetComponent<Text>().text = "<color='white'>"+inputField.text+"</color>";
        inputField.text="";
        inputField.gameObject.SetActive(false);
        AllCard.Add(card);  
        if(ischange){GameObject.DestroyImmediate(touchcard.transform.parent.gameObject);ischange=false;}
    }

    public void BtnChange(){
        inputField.gameObject.SetActive(true);
        addbutton.SetActive(false);
        touchcard= EventSystem.current.currentSelectedGameObject;
        String z = touchcard.transform.parent.Find("Text").GetComponent<Text>().text.Substring(15);
        z=z.Substring(0,z.Length-8);
        inputField.text = z;
        ischange=true;
    }
    public void BtnDelete(){
        touchcard= EventSystem.current.currentSelectedGameObject;
        Debug.Log(AllCard.Count);
        if(AllText.Count>1){
        AllText.RemoveAt(touchcard.transform.parent.GetSiblingIndex());
        GameObject.DestroyImmediate(touchcard.transform.parent.gameObject);
        }

    }


    void SaveData(){

        String JsonString =  JsonMapper.ToJson(AllText);
        if (File.Exists(savepath) == true)
        {
            File.Delete(savepath);
        }
        FileInfo file = new FileInfo(savepath);   //保存文件的路径
        StreamWriter writer = file.CreateText();   //用文本写入的方式
        writer.Write(JsonString);   //写入数据
        writer.Close();   //关闭写指针
        writer.Dispose();    //销毁写指针
    }
     List<String>  LoadData(){
        if (File.Exists(savepath) == true)
        {
            StreamReader reader = new StreamReader(savepath);
            string JsonData = reader.ReadLine();
            List<String> input = new List<String>();
            input = JsonMapper.ToObject<List<String>>(JsonData);
            reader.Close();
            reader.Dispose();
            return input;
        }
        else{
            return new List<string>();
        }
    }


}
