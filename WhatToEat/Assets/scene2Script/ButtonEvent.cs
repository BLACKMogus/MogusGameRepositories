using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using System.IO;
using System;
using UnityEngine.UI;
public class ButtonEvent : MonoBehaviour
{
    public GameObject PointLight;
    public GameObject SpotLight;
    public GameObject prefbCard;
    public GameObject Number;
    GameObject newcard;
    public GameObject PrefFirePlane;
    public static bool hascard;

    private void Start() {

        hascard=false;
    }
    public void AddSoul(){
        String intnumber = Number.GetComponent<Text>().text.Substring(15);
        intnumber=intnumber.Substring(0,intnumber.Length-8);
        int number = System.Int32.Parse(intnumber);
        number +=1;
        Number.GetComponent<Text>().text = "<color='white'>"+number.ToString()+"</color>";  
    }
    public void BtnOnce(){
        if(hascard==false){
            String intnumber = Number.GetComponent<Text>().text.Substring(15);
            intnumber=intnumber.Substring(0,intnumber.Length-8);
            int number = System.Int32.Parse(intnumber);
            number -=1;
            Number.GetComponent<Text>().text = "<color='white'>"+number.ToString()+"</color>";
            GameObject FirePlane=GameObject.Instantiate(PrefFirePlane);
            FirePlane.GetComponent<RectTransform>().DOScale(new Vector3(2.5f,2.5f,2.5f),2f);
            DOTween.To(() => 0, (x) => FirePlane.GetComponent<MeshRenderer>().material.SetFloat("_alphaScale", x), 1f, 2f).
            OnComplete(()=>{
                DOTween.To(() => 1, (x) => FirePlane.GetComponent<MeshRenderer>().material.SetFloat("_alphaScale", x), 0f, 5f).
                OnComplete(()=>{GameObject.DestroyImmediate(FirePlane);});
            });
            Invoke("ShowCard",1f);
            hascard=true;   
           }  
 }

    void ShowCard(){
      newcard = GameObject.Instantiate(prefbCard);    
      GameObject cardback =newcard.transform.GetChild(0).gameObject;
      GameObject cardfont =newcard.transform.GetChild(1).gameObject;
      String DrawCard = TextManager.getRandomOneCard();
      cardback.transform.GetComponent<MeshRenderer>().material.SetColor("_Color",new Color(0,0,0,0));
      cardfont.transform.GetComponent<MeshRenderer>().material.SetColor("_Color",new Color(0,0,0,0));
      DOTween.To(() => 0, (x) => cardback.transform.GetComponent<MeshRenderer>().material.SetColor("_Color",new Color(x,x,x,x)), 1f, 2f);  
      DOTween.To(() => 0, (x) => cardfont.transform.GetComponent<MeshRenderer>().material.SetColor("_Color",new Color(x,x,x,x)), 1f, 2f);
      newcard.transform.GetChild(1).GetChild(0).GetChild(0).GetChild(0).GetChild(0).GetComponent<Text>().text=DrawCard;
      newcard.transform.DOLocalRotate(new Vector3(0,1260f,0),3f,RotateMode.WorldAxisAdd); 
      newcard.transform.GetChild(1).GetChild(0).GetChild(0).GetChild(0).GetChild(0).DOLocalRotate(new Vector3(0,-1260f,0),3f,RotateMode.WorldAxisAdd); 
    }

    public void BtnReset(){
        hascard=false;
        GameObject.DestroyImmediate(newcard);
    }

    public void HideText(){
        if(newcard){newcard.SetActive(false);}
    }
    public void ShowText(){
        if(newcard){newcard.SetActive(true);}
    }

}
