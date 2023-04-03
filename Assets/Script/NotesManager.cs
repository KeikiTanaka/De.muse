using System;
using System.Collections.Generic;
using UnityEngine;

//Json��ǂݍ��ނ��߂̃N���X
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
    public int noteNum;         //�m�[�c��
    private string songName;    //�Ȗ�

    public List<int> LaneNum = new List<int>();                 //�ǂ��ɗ����Ă��邩
    public List<int> NoteType = new List<int>();                //�m�[�c�̎��
    public List<float> NotesTime = new List<float>();           //�����Əd�Ȃ�^�C�~���O
    public List<GameObject> NotesObj = new List<GameObject>();  //�I�u�W�F�N�g

    [SerializeField] private float NotesSpeed;                  //�m�[�c�X�s�[�h
    [SerializeField] GameObject noteObj;                        //�m�[�c�I�u�W�F�N�g

    void OnEnable()
    {
        noteNum = 0;
        songName = keeper.k_instance.MusicName();               //�v���C����Ȃ��Ăяo��
        NotesSpeed = 15.0f;
        Load(songName);
        Debug.Log("notesSpeed = " + NotesSpeed);
    }

    private void Load(string SongName)
    {
        //Json��ǂݍ���
        string inputString = Resources.Load<TextAsset>(SongName).ToString();
        Data inputJson = JsonUtility.FromJson<Data>(inputString);

        //�m�[�c���ݒ�
        noteNum = inputJson.notes.Length;

        for (int i = 0; i < inputJson.notes.Length; i++)
        {
            //�m�[�c�̗���Ă��鎞�Ԃ��v��
            float interval = 60 / (inputJson.BPM * (float)inputJson.notes[i].LPB);
            float beatSec = interval * (float)inputJson.notes[i].LPB;
            float time = (beatSec * inputJson.notes[i].num / (float)inputJson.notes[i].LPB) + inputJson.offset * 0.01f;

            //���X�g�Ƀ^�C�~���O�A����Ă��郌�[���A���m�[�c���A�Ƃ������������Ă���
            NotesTime.Add(time);
            LaneNum.Add(inputJson.notes[i].block);
            NoteType.Add(inputJson.notes[i].type);

            //�m�[�c�����ʒu�v�Z
            float z = NotesTime[i] * NotesSpeed;
            NotesObj.Add(Instantiate(noteObj, new Vector3(inputJson.notes[i].block - 1.5f, 0.3f, z), Quaternion.identity));
            Debug.Log("create notes");
        }
    }
}