using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CardB2F: MonoBehaviour {


    Transform cardback;
    Transform cardfront;

    public void BigOnButtonClickRotateCard()
    {
        cardback = UIManager.GetGameObject("CardBack").GetComponent<Transform>();
        cardfront = UIManager.GetGameObject("CardFront").GetComponent<Transform>();
        StartCoroutine(FlipCard(cardback, cardfront));
        cardback.SetSiblingIndex(cardfront.GetSiblingIndex());
    }
    public void SmallOnButtonClickRotateCard()
    {
        cardback = UIManager.GetGameObject("MyCardBack").GetComponent<Transform>();
        cardfront = UIManager.GetGameObject("MyCardFront").GetComponent<Transform>();
        StartCoroutine(FlipCard(cardback, cardfront));
        cardback.SetSiblingIndex(cardfront.GetSiblingIndex());
    }
    public void RotateCard(Transform cardback, Transform cardfront)
    {
        StartCoroutine(FlipCard(cardback, cardfront));
        cardback.SetSiblingIndex(cardfront.GetSiblingIndex());
    }
    IEnumerator FlipCard(Transform cardback,Transform cardfront)
    {
        float flipduration = 0.2f;
        int BackIndex = cardback.GetSiblingIndex();
        int FontIndex = cardfront.GetSiblingIndex();
        if(BackIndex<FontIndex)
        {
            cardback.SetSiblingIndex(FontIndex);
        }
        cardfront.gameObject.SetActive(false);
        cardback.gameObject.SetActive(true);
        // cardfront.rotation = Quaternion.identity;
        cardfront.rotation = Quaternion.identity;
        while (cardback.rotation.eulerAngles.y < 90)
        {
            cardback.rotation *= Quaternion.Euler(0, Time.deltaTime * 90 * (1f / flipduration), 0);
            if (cardback.rotation.eulerAngles.y > 90)
            {
                cardback.rotation = Quaternion.Euler(0, 90, 0);
                break;
            }
            yield return new WaitForFixedUpdate();
        }
        cardfront.gameObject.SetActive(true);
        cardback.gameObject.SetActive(false);
        cardfront.rotation = Quaternion.Euler(0, 90, 0);
        while (cardfront.rotation.eulerAngles.y > 0)
        {
            cardfront.rotation *= Quaternion.Euler(0, -Time.deltaTime * 90 * (1f / flipduration), 0);
            if (cardfront.rotation.eulerAngles.y >90)
            {
                cardfront.rotation = Quaternion.Euler(0, 0, 0);
                break;
            }
            yield return new WaitForFixedUpdate();
        }

      
        cardback.rotation = Quaternion.identity;
        cardback.gameObject.SetActive(true);

    }
}
