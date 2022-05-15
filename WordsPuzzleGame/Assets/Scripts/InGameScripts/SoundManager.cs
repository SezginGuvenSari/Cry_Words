using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(AudioSource))]
public class SoundManager : MonoBehaviour
{
    private bool _muteMainMusic = false;
    private bool _muteSounds = false;

    public static SoundManager instance;
    public AudioSource _audioSource;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(this);
        }
        else
        {
            Destroy(this);
        }
    }

    void Start()
    {
        _audioSource = GetComponent<AudioSource>();
        _audioSource.Play();

        
    }

    public void ToggleMainMusic()
    {
        _muteMainMusic = !_muteMainMusic;
        if (_muteMainMusic)
        {
            _audioSource.Stop();
        }
        else
        {
            _audioSource.Play();
        }
    }

    public void ToggleSound()
    {
        _muteSounds = !_muteSounds;
        GameEvents.OnToggleSoundMethod();

    }


    public bool IsSoundMuted()
    {
        return _muteSounds;
    }

    public bool IsMainMusicMuted()
    {
        return _muteMainMusic;
    }

    public void SilienceMainMusic(bool silience)
    {
        if (_muteMainMusic == false)
        {
            if (silience)
                _audioSource.volume = 0f;
            else
                _audioSource.volume = 1f;
        }
    }


}
