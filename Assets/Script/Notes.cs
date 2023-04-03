using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Notes : MonoBehaviour
{
    //ノーツ速度設定
    float note_speed = 15.0f;
    bool start;

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.Space))
        {
            start = true;
        }

        //Spaceが押されてboolがtrueになったらノーツが流れる
        if(start)
        {
            transform.position -= transform.forward * note_speed * Time.deltaTime;
        }
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Destroy")
        {
            Destroy(this.gameObject);
        }
    }
}
