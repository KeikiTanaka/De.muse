using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MusicManager : MonoBehaviour
{
    AudioSource audio;
    AudioClip Music;

    string songName;
    bool played;

    [SerializeField] GameObject Space;

    private void Awake()
    {
        //songName = music.set.name;
    }

    // Start is called before the first frame update
    void Start()
    {
        songName = keeper.k_instance.MusicName();
        audio = GetComponent<AudioSource>();
        Music = (AudioClip)Resources.Load("Musics/" + songName);    //Music��Musics�t�@�C������songName�Ɠ������O�̉���������
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space) && !played)
        {
            Destroy(Space.gameObject);
            GManager.instance.Start = true;
            GManager.instance.StartTime = Time.time;
            played = true;
            audio.PlayOneShot (Music);
        }
    }
}
