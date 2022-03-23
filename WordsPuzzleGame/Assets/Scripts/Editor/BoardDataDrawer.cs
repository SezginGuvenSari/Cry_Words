using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using UnityEditorInternal;

[CustomEditor(typeof(BoardData), false)]
[CanEditMultipleObjects]
[System.Serializable]
public class BoardDataDrawer : Editor
{
    private BoardData GameDataInstance => target as BoardData; //Look at this code  after the scriptableObjects 
    private ReorderableList _DataList;

    private void OnEnable()
    {

    }

    public override void OnInspectorGUI()
    {
        serializedObject.Update();
        DrawColumsRowsInputFields();
        EditorGUILayout.Space();

        if(GameDataInstance.Board !=null && GameDataInstance.Colums > 0 && GameDataInstance.Rows > 0)
        {
            DrawBoardTable();
        }

        serializedObject.ApplyModifiedProperties();
        if (GUI.changed)
        {
            EditorUtility.SetDirty(GameDataInstance);
        }
    }

    private void DrawColumsRowsInputFields()
    {
        var columsTemp = GameDataInstance.Colums;
        var rowsTemp = GameDataInstance.Rows;

        GameDataInstance.Colums = EditorGUILayout.IntField("Colums", GameDataInstance.Colums);
        GameDataInstance.Rows = EditorGUILayout.IntField("Rows", GameDataInstance.Rows);

        if ((GameDataInstance.Colums != columsTemp || GameDataInstance.Rows != rowsTemp) && GameDataInstance.Colums > 0 && GameDataInstance.Rows > 0)
        {
            GameDataInstance.CreateNewBoard();
        }
    }

    private void DrawBoardTable()
    {
        var tableStyle = new GUIStyle("box");
        tableStyle.padding = new RectOffset(10, 10, 10, 10);
        tableStyle.margin.left = 32;

        var headerColumStyle = new GUIStyle();
        headerColumStyle.fixedWidth = 35;

        var columStyle = new GUIStyle();
        columStyle.fixedWidth = 50;

        var rowStyle = new GUIStyle();
        rowStyle.fixedHeight = 25;
        rowStyle.fixedWidth = 40;
        rowStyle.alignment = TextAnchor.MiddleCenter;

        var textFieldStyle = new GUIStyle();
        textFieldStyle.normal.background = Texture2D.grayTexture;
        textFieldStyle.normal.textColor = Color.white;
        textFieldStyle.fontStyle = FontStyle.Bold;
        textFieldStyle.alignment = TextAnchor.MiddleCenter;

        EditorGUILayout.BeginHorizontal(tableStyle);
        for (var x = 0; x < GameDataInstance.Colums; x++)
        {
            EditorGUILayout.BeginVertical(x == -1 ? headerColumStyle : columStyle);
            for (var y = 0; y < GameDataInstance.Rows; y++)
            {
                if (x >= 0 && y >= 0)
                {
                    EditorGUILayout.BeginHorizontal(rowStyle);
                    var character = (string)EditorGUILayout.TextArea(GameDataInstance.Board[x].Row[y], textFieldStyle);
                    if (GameDataInstance.Board[x].Row[y].Length > 1)
                    {
                        character = GameDataInstance.Board[x].Row[y].Substring(0, 1);
                    }
                    GameDataInstance.Board[x].Row[y] = character;
                    EditorGUILayout.EndHorizontal();
                }
            }
            EditorGUILayout.EndVertical();
        }
        EditorGUILayout.EndHorizontal();
    }
}
