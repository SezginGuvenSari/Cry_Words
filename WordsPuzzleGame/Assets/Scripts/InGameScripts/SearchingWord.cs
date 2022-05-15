using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;
public class SearchingWord : MonoBehaviour
{

    public Text displayedText;
    private string _word;


    void Start()
    {
        
    }

    private void OnEnable()
    {
        GameEvents.OnCorrectWord += CorrectWord;

    }

    private void OnDisable()
    {
        GameEvents.OnCorrectWord -= CorrectWord;
    }

    public void SetWord(string word)
    {
        _word = word;
        displayedText.text = word;
    }

    private void CorrectWord(string word, List<int> squareIndexes)
    {
        if(word == _word)
        {
            // Animation added with do-tween
            gameObject.GetComponent<RectTransform>().DOMoveY(-1.5f, 0.5f);
            gameObject.GetComponent<RectTransform>().DOScale(1.5f, 1f).SetEase(Ease.InBounce);
            gameObject.GetComponent<CanvasGroup>().DOFade(0f,1f);

        }
    }
}
