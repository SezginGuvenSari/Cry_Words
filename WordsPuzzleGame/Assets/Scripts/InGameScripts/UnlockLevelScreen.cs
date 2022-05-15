using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;
public class UnlockLevelScreen : MonoBehaviour
{
    [System.Serializable]
    public struct CategoryNames
    {
        public string name;
        public Text CategoryNameText;

    };


    public GameData currentGameData;
    public List<CategoryNames> categoryNames;
    public GameObject winScreen;
    public Text categoryText;


    void Start()
    {
        winScreen.SetActive(false);
        GameEvents.OnUnlockNextCategory += OnUnlockNextCategory;


    }


    private void OnDisable()
    {
        GameEvents.OnUnlockNextCategory -= OnUnlockNextCategory;
    }

    private void OnUnlockNextCategory()
    {
        bool captureNext = false;

        foreach (var writing in categoryNames)
        {
            if (captureNext)
            {
                categoryText.text = writing.CategoryNameText.text;
                captureNext = false;
                break;
            }
            if (writing.name == currentGameData.selectedCategoryName)
            {
                captureNext = true;
            }
            

        }
        StartCoroutine(PanelDelay());
    }



    IEnumerator PanelDelay()
    {
        yield return new WaitForSeconds(1f);
        winScreen.GetComponent<RectTransform>().DOScale(1f, 1f).SetEase(Ease.OutBounce);
        winScreen.SetActive(true);
    }


}
