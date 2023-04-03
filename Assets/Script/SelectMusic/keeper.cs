using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class keeper : MonoBehaviour
{
    //次のシーンまでこのオブジェクトを残し
    //曲名を渡したら削除

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

    //曲名を取得し、数秒後にシーン遷移関数を呼び出す
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
