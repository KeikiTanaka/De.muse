using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Light : MonoBehaviour
{
    [SerializeField] private float speed = 2;   //ˆÃ‚­‚È‚éŠÔ
    [SerializeField] private int line = 1;      //ƒŒ[ƒ“‚Ì”Ô†

    GameObject line_obj;
    private Vector3 pos_1 = new Vector3(-1.5f, 0.01f, 4.0f);
    private Vector3 pos_2 = new Vector3(-0.5f, 0.01f, 4.0f);
    private Vector3 pos_3 = new Vector3(0.5f, 0.01f, 4.0f);
    private Vector3 pos_4 = new Vector3(1.5f, 0.01f, 4.0f);

    private Renderer rend;
    private float alfa = 0.0f;                 //“§–¾“x
    //private float light_speed = 100.0f;        //‰º‚ÉˆÚ“®‚³‚¹‚é

    // Start is called before the first frame update
    void Start()
    {
        rend = GetComponent<Renderer>();
        line_obj = this.gameObject;
    }

    // Update is called once per frame
    void Update()
    {

        if (!(rend.material.color.a <= 0))
        {
            rend.material.color = new Color(1.0f,1.0f,1.0f,alfa);
        }

        if (line == 1)
        {
            if (Input.GetKeyDown(KeyCode.D))
            {
                //line_obj.transform.position = pos_1;
                colorChange();
            }
        }
        if (line == 2)
        {
            if (Input.GetKeyDown(KeyCode.F))
            {
                //line_obj.transform.position = pos_2;
                colorChange();
            }
        }
        if (line == 3)
        {
            if (Input.GetKeyDown(KeyCode.J))
            {
                //line_obj.transform.position = pos_3;
                colorChange();
            }
        }
        if (line == 4)
        {
            if (Input.GetKeyDown(KeyCode.K))
            {
                //line_obj.transform.position = pos_4;
                colorChange();
            }
        }

        //‚¾‚ñ‚¾‚ñˆÃ‚­‚·‚é
        alfa -= speed * Time.deltaTime;
        //transform.position -= (transform.forward * light_speed *Time.deltaTime);
    }

    void colorChange()
    {
        alfa = 0.5f;

        rend.material.color = new Color(1.0f,1.0f,1.0f,alfa);
    }

    void posChange()
    {
        int i = 10;
    }
}