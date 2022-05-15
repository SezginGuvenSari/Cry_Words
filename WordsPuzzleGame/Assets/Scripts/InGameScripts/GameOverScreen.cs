using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;
public class GameOverScreen : MonoBehaviour
{
    public GameObject gameOverScreen;
    public GameObject AdsButton;


    void Start()
    {
        AdsButton.GetComponent<Button>().interactable = false;
        gameOverScreen.SetActive(false);

        GameEvents.OnGameOver += ShowGameOverScreen;
    }

    private void OnDisable()
    {
        GameEvents.OnGameOver -= ShowGameOverScreen;
    }

    private void ShowGameOverScreen()
    {
        StartCoroutine(PanelDelay());
        AdsButton.GetComponent<Button>().interactable = true;
    }



    IEnumerator PanelDelay()
    {
        yield return new WaitForSeconds(1f);
        gameOverScreen.GetComponent<RectTransform>().DOScale(1f, 1f).SetEase(Ease.OutBounce);
        gameOverScreen.SetActive(true);
    }

}
