using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SeachingWordsList : MonoBehaviour
{
    public GameData currentGameData;
    public GameObject searchingWordPrefab;
    public float offset = 0.0f;
    public int maxColums = 5;
    public int maxRows = 4;

    private int _colums = 2;
    private int _rows;
    private int _wordsNumber;


    private List<GameObject> _words = new List<GameObject>();


    private void Start()
    {
        _wordsNumber = currentGameData.selectedBoardData.SearcingWords.Count;

        if (_wordsNumber < _colums)
            _rows = 1;
        else
            CalculateColumsAndRowsNumbers();
        CreateWordsObject();
        SetWordsPosition();
    }


    private void CalculateColumsAndRowsNumbers()
    {
        do
        {
            _colums++;
            _rows = _wordsNumber / _colums;
        } while (_rows >= maxRows);
        if (_colums > maxColums)
        {
            _colums = maxColums;
            _rows = _wordsNumber / _colums;
        }

    }

    private bool TryIncreaseColumnNumber()
    {
        _colums++;
        _rows = _wordsNumber / _colums;

        if (_colums > maxColums)
        {
            _colums = maxColums;
            _rows = _wordsNumber / _colums;
            return false;
        }
        if (_wordsNumber % _colums > 0)
            _rows++;
        return true;
    }


    private void CreateWordsObject()
    {
        var squareScale = GetVectorSquareScale(new Vector3(1f, 1f, 0.1f));
        for (var index = 0; index < _wordsNumber; index++)
        {
            _words.Add(Instantiate(searchingWordPrefab) as GameObject);
            _words[index].transform.SetParent(this.transform);
            _words[index].GetComponent<RectTransform>().localScale = squareScale;
            _words[index].GetComponent<RectTransform>().localPosition = new Vector3(0f, 0f, 0f);
        }
    }

    private Vector3 GetVectorSquareScale(Vector3 defaultScale)
    {
        var finalScale = defaultScale;
        var adjustment = 0.01f;

        while (ShouldScaleDown(finalScale))
        {
            finalScale.x -= adjustment;
            finalScale.y -= adjustment;
            if (finalScale.x <= 0 || finalScale.y <= 0)
            {
                finalScale.x = adjustment;
                finalScale.y = adjustment;
                return finalScale;
            }
        }
        return finalScale;


    }

    private bool ShouldScaleDown(Vector3 targetScale)
    {

        var squareRect = searchingWordPrefab.GetComponent<RectTransform>();
        var parentRect = this.GetComponent<RectTransform>();
        var squareSize = new Vector2(0f, 0f);

        squareSize.x = squareRect.rect.width * targetScale.x + offset;
        squareSize.y = squareRect.rect.height * targetScale.y + offset;

        var totalSquaresHeight = squareSize.y * _rows;

        // Make sure all of the square fit in the parent rectangle area

        if (totalSquaresHeight > parentRect.rect.height)
        {
            while (totalSquaresHeight > parentRect.rect.height)
            {
                if (TryIncreaseColumnNumber())
                {
                    totalSquaresHeight = squareSize.y * _rows;
                }
                else
                {
                    return true;
                }
            }
        }
        var totalSquareWidth = squareSize.x * _colums;
        if (totalSquareWidth > parentRect.rect.width)
            return true;

        return false;
    }

    private void SetWordsPosition()
    {
        var squareRect = _words[0].GetComponent<RectTransform>();
        var wordOffSet = new Vector2
        {
            x = squareRect.rect.width * squareRect.transform.localScale.x + offset,
            y = squareRect.rect.height * squareRect.transform.localScale.y + offset
        };
        int columnNumber = 0;
        int rowNumber = 0;

        var startPosition = GetFirstSquarePosition();
        foreach (var word in _words )
        {
            if(columnNumber + 1 > _colums)
            {
                columnNumber = 0;
                rowNumber++;
            }
            var positionX = startPosition.x + wordOffSet.x * columnNumber;
            var positionY = startPosition.y - wordOffSet.y * rowNumber;

            word.GetComponent<RectTransform>().localPosition = new Vector2(positionX, positionY);
            columnNumber++;
        }
    }

    private Vector2 GetFirstSquarePosition()
    {
        var startPosition = new Vector2(0f, transform.position.y);
        var squareRect = _words[0].GetComponent<RectTransform>();

        var parentRect = this.GetComponent<RectTransform>();
        var squareSize = new Vector2(0f, 0f);

        squareSize.x = squareRect.rect.width * squareRect.transform.localScale.x + offset;

        squareSize.y = squareRect.rect.height * squareRect.transform.localScale.y + offset;

        // Make sure they are in the centre

        var shiftBy = (parentRect.rect.width - (squareSize.x * _colums)) / 2;
        startPosition.x = ((parentRect.rect.width - squareSize.x) / 2) * (-1);
        startPosition.x += shiftBy;
        startPosition.y = (parentRect.rect.height - squareSize.y) / 2;
        return startPosition;


    }
}