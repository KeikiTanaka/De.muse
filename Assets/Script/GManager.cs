using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GManager : MonoBehaviour
{
    //コンボ表示
    public GameObject text_combo = null;
    public GameObject text_max = null;
    public GameObject text_score = null;
    Text combo_text;
    Text Max_text;
    Text score_text;

    public static GManager instance = null;

    public int songID;
    public float noteSpeed;

    public bool Start;
    public float StartTime;     //Spaceが押された時間を記録

    //スコア関連
    public int combo = 0;
    public int max_combo = 0;
    public int score = 0;

    //ジャッジ記録
    public int perfect = 0;
    public int great = 0;
    public int good = 0;
    public int bad = 0;
    public int miss = 0;

    public void Awake()
    {
        //シーン内にこのオブジェクトが一つしかないようにする
        if(instance == null)
        {
            instance = this;
            DontDestroyOnLoad(this.gameObject);
        }
        else
        {
            Destroy(this.gameObject);
        }

        combo_text = text_combo.GetComponent<Text>();
        Max_text = text_max.GetComponent<Text>();
        score_text = text_score.GetComponent<Text>();
    }

    // Update is called once per frame
    void Update()
    {
        if(max_combo < combo)
        {
            max_combo = combo;
        }
        Debug.Log("Combo = " + combo);

        combo_text.text = ("Combo : " + combo);
        Max_text.text = ("Max combo : " + max_combo);
        score_text.text = ("score : " + score);
    }
}
