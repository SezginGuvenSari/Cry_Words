using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WordChecker : MonoBehaviour
{
    public GameData currentGameData;
    private string _word;

    private void OnEnable()
    {
        GameEvents.OnCheckSquare += SquareSelected;
    }
    private void OnDisable()
    {
        GameEvents.OnCheckSquare -= SquareSelected;
    }

    void Start()
    {

    }

    void Update()
    {

    }


    private void SquareSelected(string letter, Vector3 squarePosition, int squareIndex)
    {
        GameEvents.SelectSquareMethod(squarePosition);
        _word += letter;
        CheckWord();
    }

    private void CheckWord()
    {
        foreach (var searcingWord in currentGameData.selectedBoardData.SearcingWords)
        {

            if (_word == searcingWord.Word)
            {
                _word = string.Empty;
                return;
            }
        }
    }
}
