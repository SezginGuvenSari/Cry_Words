using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
public class WinScreen : MonoBehaviour
{
    public GameObject winPanel;
    private AudioSource _source;
    void Start()
    {
        winPanel.SetActive(false);
        _source = GetComponent<AudioSource>();
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
        SoundManager.instance._audioSource.Stop();

      
            
        StartCoroutine(PanelDelay());
        
    }

    public void LoadNextLevel()
    {
        GameEvents.LoadNextLevelMethod(); 
        SoundManager.instance._audioSource.Play();
    }


    IEnumerator PanelDelay()
    {
        yield return new WaitForSeconds(1f);
        winPanel.GetComponent<RectTransform>().DOScale(1f, 1f).SetEase(Ease.OutBounce);
        winPanel.SetActive(true);
        if (SoundManager.instance.IsSoundMuted() == false)
            _source.Play();
    }
}
