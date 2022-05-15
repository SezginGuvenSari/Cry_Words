using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
public class WinScreen : MonoBehaviour
{
    public GameObject winPanel;

    void Start()
    {
        winPanel.SetActive(false);
    }


    private void OnEnable()
    {
        GameEvents.OnBoardCompleted += ShowWinScreen;
    }
    private void OnDisable()
    {
        GameEvents.OnBoardCompleted -= ShowWinScreen;
    }

    public void ShowWinScreen()
    {
        
        StartCoroutine(PanelDelay());
    }

    public void LoadNextLevel()
    {
        GameEvents.LoadNextLevelMethod();
    }


    IEnumerator PanelDelay()
    {
        yield return new WaitForSeconds(1f);
        winPanel.GetComponent<RectTransform>().DOScale(1f, 1f).SetEase(Ease.OutBounce);
        winPanel.SetActive(true);
    }
}
