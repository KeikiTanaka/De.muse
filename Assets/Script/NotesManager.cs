using System;
using System.Collections.Generic;
using UnityEngine;

//Jsonを読み込むためのクラス
[Serializable]
public class Data
{
    public string name;
    public int maxBlock;
    public int BPM;
    public int offset;
    public Note[] notes;
}

[Serializable]
public class Note
{
    public int type;
    public int num;
    public int block;
    public int LPB;
}

public class NotesManager : MonoBehaviour
{
    public int noteNum;         //ノーツ数
    private string songName;    //曲名

    public List<int> LaneNum = new List<int>();                 //どこに落ちてくるか
    public List<int> NoteType = new List<int>();                //ノーツの種類
    public List<float> NotesTime = new List<float>();           //判定戦と重なるタイミング
    public List<GameObject> NotesObj = new List<GameObject>();  //オブジェクト

    [SerializeField] private float NotesSpeed;                  //ノーツスピード
    [SerializeField] GameObject noteObj;                        //ノーツオブジェクト

    void OnEnable()
    {
        noteNum = 0;
        songName = keeper.k_instance.MusicName();               //プレイする曲を呼び出す
        NotesSpeed = 15.0f;
        Load(songName);
        Debug.Log("notesSpeed = " + NotesSpeed);
    }

    private void Load(string SongName)
    {
        //Jsonを読み込む
        string inputString = Resources.Load<TextAsset>(SongName).ToString();
        Data inputJson = JsonUtility.FromJson<Data>(inputString);

        //ノーツ数設定
        noteNum = inputJson.notes.Length;

        for (int i = 0; i < inputJson.notes.Length; i++)
        {
            //ノーツの流れてくる時間を計測
            float interval = 60 / (inputJson.BPM * (float)inputJson.notes[i].LPB);
            float beatSec = interval * (float)inputJson.notes[i].LPB;
            float time = (beatSec * inputJson.notes[i].num / (float)inputJson.notes[i].LPB) + inputJson.offset * 0.01f;

            //リストにタイミング、流れてくるレーン、何ノーツか、といった情報を入れていく
            NotesTime.Add(time);
            LaneNum.Add(inputJson.notes[i].block);
            NoteType.Add(inputJson.notes[i].type);

            //ノーツ生成位置計算
            float z = NotesTime[i] * NotesSpeed;
            NotesObj.Add(Instantiate(noteObj, new Vector3(inputJson.notes[i].block - 1.5f, 0.3f, z), Quaternion.identity));
            Debug.Log("create notes");
        }
    }
}