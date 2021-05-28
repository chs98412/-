using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;


using Firebase;
using Firebase.Database;

public class loginButton : MonoBehaviour
{
   

    public static List<Vector3> positions=new List<Vector3>();


    public InputField ID;
    public InputField password;
    public Text loginresult;
    public GameObject createAccpanel;

    int loginSuccess;
    int finish;
    float timer;
    float time ;

    public DatabaseReference reference { get; set; }

     void Start()
    {
        timer = 0;
        time = 2;
    }
    void Update()
    {
        if (finish == 1) timer += Time.deltaTime;

        Debug.Log(timer);
        if(timer>time)
            HomeScene();
    }


    public void Info()
    {
        //    Debug.Log(ID.text);
        //    Debug.Log(password.text);
        string inputID = ID.text;
        string inputPassword = password.text;


        reference = FirebaseDatabase.DefaultInstance.GetReference("users");


        reference.GetValueAsync().ContinueWith(task =>
        {
            

            if (task.IsCompleted)
            { // 성공적으로 데이터를 가져왔으면
                DataSnapshot snapshot = task.Result;
                // 데이터를 출력하고자 할때는 Snapshot 객체 사용함
                foreach (DataSnapshot data in snapshot.Children)
                {
                    if (data.Key == inputID)
                    {
                        Debug.Log("성공1");

                        IDictionary Info = (IDictionary)data.Value;

                        if (Info["PASSWORD"].ToString() == inputPassword)
                        {

                            string[] temp;
                            temp = Info["closet"].ToString().Split(';');
                            for(int i = 0; i < 5; i++)
                            {
                                GameDirector.closet[i] = int.Parse(temp[i]);
                            }

                            Debug.Log("성공");

                            GameDirector.ID = data.Key;


                            //Debug.Log("이름은??   " + Info["Name"]);
                            //Debug.Log("비번은??   " + Info["PASSWORD"]);


                            GameDirector.stagelevel = int.Parse(Info["score"].ToString());
                            GameDirector.nowBody = int.Parse(Info["pangpangColor"].ToString());
                            GameDirector.totalCoin = int.Parse(Info["totalCoin"].ToString());



                            Debug.Log("팡팡이색은??   " + GameDirector.nowBody.ToString());
                            Debug.Log("점수는??   " + GameDirector.stagelevel.ToString());

                            Debug.Log("코인은??   " + GameDirector.totalCoin.ToString());
                        }
                        else 
                        {
                            Debug.Log("실패");

                        }

                    }

                }

              

            }

            if (GameDirector.totalCoin.ToString() == "12645"){
                Info();
            }

  finish = 1;






        });


    }

    public void HomeScene()
    {

        SceneManager.LoadScene("Home");
    }


    public void createAccPanel()
    {
        createAccpanel.SetActive(true);
    }




}