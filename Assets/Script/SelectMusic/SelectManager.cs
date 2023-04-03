using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SelectManager : MonoBehaviour
{
    //オブジェクト
    GameObject music_text;
    GameObject my_obj;

    //実際にプレイする曲名を入れる
    public string music_name;

    //インスタンス
    public static SelectManager send;

    public void Awake()
    {
        if(send == null)
        {
            send = this;
        }
    }

    public void Select(int num)
    {
        if(num == 1)
        {
            music_name = ("bass_line");
            Debug.Log(music_name);
        }
        if(num == 2)
        {
            music_name = ("flamewhip");
            Debug.Log(music_name);
        }
        if(num == 3)
        {
            music_name = ("ENGRAM");
            Debug.Log(music_name);
        }
        if (num == 4)
        {
            music_name = ("paqqin");
            Debug.Log(music_name);
        }
        if(num == 5)
        {
            music_name = ("MARENOL");
            Debug.Log(music_name);
        }
        if (num == 6)
        {
            music_name = ("Garakuta_Doll_Play");
            Debug.Log(music_name);
        }
        if (num == 7)
        {
            music_name = ("Parallellalla");
            Debug.Log(music_name);
        }
        if (num == 8)
        {
            music_name = ("CometCoaster");
            Debug.Log(music_name);
        }
        if(num == 9)
        {
            music_name = ("CITRUSMONSTER");
            Debug.Log("music_name");
        }
        if(num == 10)
        {
            music_name = ("Haunted waltz on tape");
            Debug.Log("Haunted waltz on tape");
        }
        if(num == 11)
        {
            music_name = ("Anonymous-M");
            Debug.Log("Anonymous-M");
        }
    }

    public string SendName()
    {
        return music_name;
    }
}
