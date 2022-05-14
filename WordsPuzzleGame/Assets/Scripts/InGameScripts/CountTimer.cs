using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class CountTimer : MonoBehaviour
{
    public GameData currentGameData;
    public Text timerText;
    public Text secondsText;
    private float _timeLeft;
    private float _minutes;
    private float _seconds;
    private float _oneSecondDown;
    private bool _timeOut;
    private bool _stopTimer;
    public Image ProgressTimer;

    void Start()
    {
        _stopTimer = false;
        _timeOut = false;
        _timeLeft = currentGameData.selectedBoardData.timeInSeconds;
        _oneSecondDown = _timeLeft - 1f;
        GameEvents.OnBoardCompleted += StopTimer;
        GameEvents.OnUnlockNextCategory += StopTimer;
    }

    private void OnDisable()
    {
        GameEvents.OnBoardCompleted -= StopTimer;
        GameEvents.OnUnlockNextCategory -= StopTimer;
    }

    public void StopTimer()
    {
        _stopTimer = true;

    }
    void Update()
    {
        if (_stopTimer == false)
        {
            _timeLeft -= Time.deltaTime;
            ProgressTimer.fillAmount = _timeLeft / currentGameData.selectedBoardData.timeInSeconds;
        }
        if (_timeLeft <= _oneSecondDown)
        {
            _oneSecondDown = _timeLeft - 1f;
        }
        
    }
    void OnGUI()
    {
        if (_timeOut == false)
        {
            if (_timeLeft > 0)
            {
                _minutes = Mathf.Floor(_timeLeft / 60); // For example total time : 150s -> 150/60 : 2 minutes and 150 % 60 : 30s. Result = 2 : 30
                _seconds = Mathf.RoundToInt(_timeLeft % 60);
                timerText.text = _minutes.ToString("00");
                secondsText.text = _seconds.ToString("00");
               
            }
            else
            {
                _stopTimer = true;
                ActivateGameOverGUI();
            }
        }


    }

    private void ActivateGameOverGUI()
    {
        GameEvents.GameOverMethod();
        _timeOut = true;

    }


}
