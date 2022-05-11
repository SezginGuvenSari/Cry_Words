using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
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
        gameOverScreen.SetActive(true);
        AdsButton.GetComponent<Button>().interactable = false;
    }
}
