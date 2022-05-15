using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class SoundToggleBtn : MonoBehaviour
{
    public enum ButtonTypes
    {
     MainMusic,
     SoundMusic
    };

    public ButtonTypes type;

    public Sprite onSprite;
    public Sprite offSprite;
    private Image _image;


    void Start()
    {
        _image = GetComponent<Image>();
        _image.sprite = onSprite;
        ToggleButton();
    }
    
    public void ToggleButton()
    {
        var muted = false;
        if (type == ButtonTypes.MainMusic)
            muted = SoundManager.instance.IsMainMusicMuted();
        else
            muted = SoundManager.instance.IsSoundMuted();

        if (muted)
        {
            _image.sprite = offSprite;
            
        }
        else
        {
            _image.sprite = onSprite;
           
        }
    }
}
