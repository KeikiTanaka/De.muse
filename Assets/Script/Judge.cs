using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Judge : MonoBehaviour
{
    //変数の宣言
    [SerializeField] private GameObject[] MessageObj;//プレイヤーに判定を伝えるゲームオブジェクト
    [SerializeField] NotesManager notesManager;//スクリプト「notesManager」を入れる変数

    private int sumNotes = 0;

    //ヒットサウンド
    AudioSource audio;
    [SerializeField] private AudioClip perfect;
    [SerializeField] private AudioClip great;
    [SerializeField] private AudioClip good;

    //クリアのロゴ
    [SerializeField] private GameObject clear;

    void Start()
    {
        //ヒットサウンド
        audio = GetComponent<AudioSource>();

        //ノーツの総数より1多い数を入れておく
        sumNotes = notesManager.noteNum - 4;
    }

    void Update()
    {
        Debug.Log("sumNotes = "+ sumNotes);
        /*メモ
         * Time.time    : 再生開始から経過した時間
         * NotesTime[?] : 判定線と重なるタイミング
         */

        if(GManager.instance.Start)
        {
            if (Input.GetKeyDown(KeyCode.D))//〇キーが押されたとき
            {
                if (notesManager.LaneNum[0] == 0)//押されたボタンはレーンの番号とあっているか？
                {
                    Judgement(GetABS(Time.time - (notesManager.NotesTime[0] + GManager.instance.StartTime)));
                    /*
                    本来ノーツをたたく場所と実際にたたいた場所がどれくらいずれているかを求め、
                    その絶対値をJudgement関数に送る
                    */
                }
                else if(notesManager.LaneNum[1] == 0)
                {
                    Judgement(GetABS(Time.time - (notesManager.NotesTime[1] + GManager.instance.StartTime)));
                }
                else if (notesManager.LaneNum[2] == 0)
                {
                    Judgement(GetABS(Time.time - (notesManager.NotesTime[2] + GManager.instance.StartTime)));
                }
                else if (notesManager.LaneNum[3] == 0)
                {
                    Judgement(GetABS(Time.time - (notesManager.NotesTime[3] + GManager.instance.StartTime)));
                }
            }
            if (Input.GetKeyDown(KeyCode.F))
            {
                if (notesManager.LaneNum[0] == 1)
                {
                    Judgement(GetABS(Time.time - (notesManager.NotesTime[0] + GManager.instance.StartTime)));
                }
                else if(notesManager.LaneNum[1] == 1)
                {
                    Judgement(GetABS(Time.time - (notesManager.NotesTime[1] + GManager.instance.StartTime)));
                }
                else if (notesManager.LaneNum[2] == 1)
                {
                    Judgement(GetABS(Time.time - (notesManager.NotesTime[2] + GManager.instance.StartTime)));
                }
                else if (notesManager.LaneNum[3] == 1)
                {
                    Judgement(GetABS(Time.time - (notesManager.NotesTime[3] + GManager.instance.StartTime)));
                }
            }
            if (Input.GetKeyDown(KeyCode.J))
            {
                if (notesManager.LaneNum[0] == 2)
                {
                    Judgement(GetABS(Time.time - (notesManager.NotesTime[0] + GManager.instance.StartTime)));
                }
                else if(notesManager.LaneNum[1] == 2)
                {
                    Judgement(GetABS(Time.time - (notesManager.NotesTime[1] + GManager.instance.StartTime)));
                }
                else if (notesManager.LaneNum[2] == 2)
                {
                    Judgement(GetABS(Time.time - (notesManager.NotesTime[2] + GManager.instance.StartTime)));
                }
                else if (notesManager.LaneNum[3] == 2)
                {
                    Judgement(GetABS(Time.time - (notesManager.NotesTime[3] + GManager.instance.StartTime)));
                }
            }
            if (Input.GetKeyDown(KeyCode.K))
            {
                if (notesManager.LaneNum[0] == 3)
                {
                    Judgement(GetABS(Time.time - (notesManager.NotesTime[0] + GManager.instance.StartTime)));
                }
                else if(notesManager.LaneNum[1] == 3)
                {
                    Judgement(GetABS(Time.time - (notesManager.NotesTime[1] + GManager.instance.StartTime)));
                }
                else if (notesManager.LaneNum[2] == 3)
                {
                    Judgement(GetABS(Time.time - (notesManager.NotesTime[2] + GManager.instance.StartTime)));
                }
                else if (notesManager.LaneNum[3] == 3)
                {
                    Judgement(GetABS(Time.time - (notesManager.NotesTime[3] + GManager.instance.StartTime)));
                }
            }

            //実際にたたくべきタイミングより0.21以上過ぎた場合Miss判定
            if (Time.time > notesManager.NotesTime[0] + 0.21f + GManager.instance.StartTime)
            {
                sumNotes -= 1;
                Debug.Log("Miss");
                GManager.instance.miss++;
                GManager.instance.combo = 0;

                message(3);
                deleteData();
            }
        }

        if(sumNotes == 0)
        {
            //クリア表示
            InvokeRepeating("Clear", 3.0f, 50);
            //シーン遷移
            InvokeRepeating("ChangeScene", 6.0f,50);
        }

    }

    //ノーツをたたいた場所と本来たたくべき場所のずれを判定する
    void Judgement(float timeLag)
    {
        //誤差が0.1秒以下Perfect
        if (timeLag <= 0.10)
        {
            //audio.PlayOneShot(perfect);
            sumNotes -= 1;
            GManager.instance.perfect++;
            GManager.instance.combo++;
            GManager.instance.score += 500 * (GManager.instance.combo / 10);

            message(0);
            deleteData();
        }
        else
        {
            //誤差が0.15秒以下Great
            if (timeLag <= 0.15)
            {
                //audio.PlayOneShot(great);
                sumNotes -= 1;
                GManager.instance.great++;
                GManager.instance.combo++;
                GManager.instance.score += 300 * (GManager.instance.combo / 10);

                message(1);
                deleteData();
            }
            else
            {
                //誤差が0.2秒以下Good
                if (timeLag <= 0.20)
                {
                    //audio.PlayOneShot(good);
                    sumNotes -= 1;
                    GManager.instance.good++;
                    GManager.instance.combo++;
                    GManager.instance.score += 100 * (GManager.instance.combo / 10);

                    message(2);
                    deleteData();
                }
            }
        }
    }

    //関数:与えられた引数の絶対値を返す
    float GetABS(float num)
    {
        if (num >= 0)
        {
            return num;
        }
        else
        {
            return -num;
        }
    }

    //関数:たたいたノーツの情報をリストから削除
    void deleteData()
    {
        notesManager.NotesTime.RemoveAt(0);
        notesManager.LaneNum.RemoveAt(0);
        notesManager.NoteType.RemoveAt(0);

        Destroy(notesManager.NotesObj[0]);
        notesManager.NotesObj.RemoveAt(0);
    }
    
    //関数:判定を表示する
    void message(int judge)
    {
        Instantiate(MessageObj[judge], new Vector3(notesManager.LaneNum[0] - 1.5f, 0.76f, 0.15f), Quaternion.Euler(45, 0, 0));
    }

    //関数:クリア表示
    void Clear()
    {
        clear.gameObject.SetActive(true);
    }

    //関数:シーン遷移
    void ChangeScene()
    {
        clear.gameObject.SetActive(false);
        SceneManager.LoadScene("ResultScene");
    }
}
