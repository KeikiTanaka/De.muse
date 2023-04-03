using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class ScoreText : MonoBehaviour
{
    //テキスト
    public GameObject combo = null;
    public GameObject perfect = null;
    public GameObject great = null;
    public GameObject good = null;
    public GameObject miss = null;
    public GameObject score = null;

    //オブジェクト
    public GameObject GameManager;
    public GameObject keeper;

    Text combo_text;
    Text perfect_text;
    Text great_text;
    Text good_text;
    Text miss_text;
    Text score_text;

    private int t_combo;
    private int t_perfect;
    private int t_great;
    private int t_good;
    private int t_miss;
    private float t_score;

    void Awake()
    {
        GameManager = GameObject.Find("GameManager");
        keeper = GameObject.Find("name_keeper");
    }

    // Start is called before the first frame update
    void Start()
    {
        t_combo = GManager.instance.max_combo;
        t_perfect = GManager.instance.perfect;
        t_great = GManager.instance.combo;
        t_good = GManager.instance.combo;
        t_miss = GManager.instance.miss;
        t_score = GManager.instance.score;

        combo_text = combo.GetComponent<Text>();
        perfect_text = perfect.GetComponent<Text>();
        great_text = great.GetComponent<Text>();
        good_text = good.GetComponent<Text>();
        miss_text = miss.GetComponent<Text>();
        score_text = score.GetComponent<Text>();

        combo_text.text = ("MaxCombo    : " + t_combo);
        perfect_text.text = ("Perfect     : " + t_perfect);
        great_text.text = ("Great       : " + t_great);
        good_text.text = ("Good        : " + t_good);
        miss_text.text = ("Miss        : " + t_miss);
        score_text.text = ("Score       : " + t_score);

        Destroy(GameManager.gameObject);
        Destroy(keeper.gameObject);
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyUp(KeyCode.Space))
        {
            SceneManager.LoadScene("TitleScene");
        }
    }
}