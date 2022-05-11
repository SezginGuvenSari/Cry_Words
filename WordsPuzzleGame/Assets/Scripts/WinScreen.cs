using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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

    private void ShowWinScreen()
    {
        winPanel.SetActive(true);
    }

    public void LoadNextLevel()
    {
        GameEvents.LoadNextLevelMethod();
    }
}
