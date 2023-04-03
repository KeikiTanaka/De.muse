using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Judge : MonoBehaviour
{
    //�ϐ��̐錾
    [SerializeField] private GameObject[] MessageObj;//�v���C���[�ɔ����`����Q�[���I�u�W�F�N�g
    [SerializeField] NotesManager notesManager;//�X�N���v�g�unotesManager�v������ϐ�

    private int sumNotes = 0;

    //�q�b�g�T�E���h
    AudioSource audio;
    [SerializeField] private AudioClip perfect;
    [SerializeField] private AudioClip great;
    [SerializeField] private AudioClip good;

    //�N���A�̃��S
    [SerializeField] private GameObject clear;

    void Start()
    {
        //�q�b�g�T�E���h
        audio = GetComponent<AudioSource>();

        //�m�[�c�̑������1�����������Ă���
        sumNotes = notesManager.noteNum - 4;
    }

    void Update()
    {
        Debug.Log("sumNotes = "+ sumNotes);
        /*����
         * Time.time    : �Đ��J�n����o�߂�������
         * NotesTime[?] : ������Əd�Ȃ�^�C�~���O
         */

        if(GManager.instance.Start)
        {
            if (Input.GetKeyDown(KeyCode.D))//�Z�L�[�������ꂽ�Ƃ�
            {
                if (notesManager.LaneNum[0] == 0)//�����ꂽ�{�^���̓��[���̔ԍ��Ƃ����Ă��邩�H
                {
                    Judgement(GetABS(Time.time - (notesManager.NotesTime[0] + GManager.instance.StartTime)));
                    /*
                    �{���m�[�c���������ꏊ�Ǝ��ۂɂ��������ꏊ���ǂꂭ�炢����Ă��邩�����߁A
                    ���̐�Βl��Judgement�֐��ɑ���
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

            //���ۂɂ������ׂ��^�C�~���O���0.21�ȏ�߂����ꍇMiss����
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
            //�N���A�\��
            InvokeRepeating("Clear", 3.0f, 50);
            //�V�[���J��
            InvokeRepeating("ChangeScene", 6.0f,50);
        }

    }

    //�m�[�c�����������ꏊ�Ɩ{���������ׂ��ꏊ�̂���𔻒肷��
    void Judgement(float timeLag)
    {
        //�덷��0.1�b�ȉ�Perfect
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
            //�덷��0.15�b�ȉ�Great
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
                //�덷��0.2�b�ȉ�Good
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

    //�֐�:�^����ꂽ�����̐�Βl��Ԃ�
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

    //�֐�:���������m�[�c�̏������X�g����폜
    void deleteData()
    {
        notesManager.NotesTime.RemoveAt(0);
        notesManager.LaneNum.RemoveAt(0);
        notesManager.NoteType.RemoveAt(0);

        Destroy(notesManager.NotesObj[0]);
        notesManager.NotesObj.RemoveAt(0);
    }
    
    //�֐�:�����\������
    void message(int judge)
    {
        Instantiate(MessageObj[judge], new Vector3(notesManager.LaneNum[0] - 1.5f, 0.76f, 0.15f), Quaternion.Euler(45, 0, 0));
    }

    //�֐�:�N���A�\��
    void Clear()
    {
        clear.gameObject.SetActive(true);
    }

    //�֐�:�V�[���J��
    void ChangeScene()
    {
        clear.gameObject.SetActive(false);
        SceneManager.LoadScene("ResultScene");
    }
}
