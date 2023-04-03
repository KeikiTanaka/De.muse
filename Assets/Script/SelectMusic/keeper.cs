using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class keeper : MonoBehaviour
{
    //���̃V�[���܂ł��̃I�u�W�F�N�g���c��
    //�Ȗ���n������폜

    public static keeper k_instance;
    public string soundname = "ENGRAM";

    bool next;

    public void Awake()
    {
        if(k_instance == null)
        {
            k_instance = this;
        }

        next = true;

        DontDestroyOnLoad(gameObject);
    }

    //�Ȗ����擾���A���b��ɃV�[���J�ڊ֐����Ăяo��
    public void GetMusic()
    {
        soundname = SelectManager.send.SendName();
        Debug.Log("Get "+ soundname);

        if(soundname == (""))
        {
            soundname = ("ENGRAM");
        }

        if(next)
        {
            Invoke("Next", 1.0f);
            next = false;
        }

    }

    public string MusicName()
    {
        return soundname;
    }

    public void Next()
    {
        SceneManager.LoadScene("GameScene");
    }
}
