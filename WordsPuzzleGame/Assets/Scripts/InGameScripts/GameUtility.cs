using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using DG.Tweening;
using UnityEngine.UI;
public class GameUtility : MonoBehaviour
{
    [SerializeField] GameObject settigsPanel;

    public GameData currentGameData;
    private void Start()
    {
        Camera.main.orthographicSize = currentGameData.selectedBoardData.cameraSize;
    }
    public void LoadScene(string sceneName)
    {
        SceneManager.LoadScene(sceneName);
    }
   
    public void Exit()
    {
        Application.Quit();
    }

    public void InstagramUrl()
    {
        Application.OpenURL("https://www.instagram.com/guvensrii/?hl=tr");
    }

    public void LinkedlnUrl()
    {
        Application.OpenURL("https://www.linkedin.com/in/güven-sarý-1934b2149/");
    }

    public void ClosePanel()
    {
        settigsPanel.GetComponent<RectTransform>().DOScale(1f, 0.5f).SetEase(Ease.InElastic);
        StartCoroutine(AnimPanels());
    }

    public void OpenPanel()
    {
        settigsPanel.GetComponent<RectTransform>().DOScale(1.2f, 1f).SetEase(Ease.InOutElastic);
        settigsPanel.SetActive(true);
        
    }
    IEnumerator AnimPanels()
    {
        yield return new WaitForSeconds(0.5f);
        settigsPanel.SetActive(false);
    }
    public void MuteToggleMainMusic()
    {
        SoundManager.instance.ToggleMainMusic();
    }
    public void MuteSoundMusic()
    {
        SoundManager.instance.ToggleSound();
    }
}
