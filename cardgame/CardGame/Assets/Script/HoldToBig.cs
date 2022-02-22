using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using DG.Tweening;
using UnityEngine.UI;
public class HoldToBig : MonoBehaviour, IPointerDownHandler {

    GameObject newpic;

    public void OnPointerDown(PointerEventData eventData)
    {

        Transform obj = this.gameObject.transform;
        newpic = new GameObject(this.transform.name, typeof(Image));
        newpic.transform.SetParent(UIManager.GetGameObject("Canvas").transform);
        newpic.GetComponent<Image>().sprite = this.gameObject.GetComponent<Image>().sprite;
        newpic.AddComponent<Button>();
        newpic.GetComponent<Button>().onClick.AddListener(delegate () { Destroy(newpic); });
        newpic.transform.position = this.gameObject.transform.position;
       // Debug.Log("position" + this.gameObject.transform.position);
        // newpic.transform.DOLocalMove()
        newpic.transform.DOLocalMove(new Vector3(0, 0, 0),1);
        newpic.transform.DOScale(new Vector3(9,15,0), 1);
       // throw new System.NotImplementedException();
    }

}
