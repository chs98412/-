using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;


using Firebase;
using Firebase.Database;

public class loadingScene : MonoBehaviour
{

    public DatabaseReference reference { get; set; }
    int finish;


    // Start is called before the first frame update
    void Start()
    {
        loginButton.positions.Clear();
        Vec();
    }

    // Update is called once per frame
    void Update()
    {
        Debug.Log("끝났나??     "+finish);

        if (finish == 1) enterGame();
    }

    public void Vec()
    {

        reference = FirebaseDatabase.DefaultInstance.GetReference("scores");


        reference.GetValueAsync().ContinueWith(task =>
        {


            if (task.IsCompleted)
            { // 성공적으로 데이터를 가져왔으면

                DataSnapshot snapshot = task.Result;
                // 데이터를 출력하고자 할때는 Snapshot 객체 사용함
                foreach (DataSnapshot stageinfo in snapshot.Children) //스테이지정보들
                {

                    if (stageinfo.Key == GameDirector.stagelevel.ToString()) //스테이지 키들
                    {


                        foreach (DataSnapshot monster in stageinfo.Children)    //몬스터1,2,3,4,5,6
                        {

                            foreach (DataSnapshot pos in monster.Children)
                            {

                                Debug.Log("레벨!   "+GameDirector.stagelevel.ToString());


                                string[] PosTemp;
                                PosTemp = pos.Value.ToString().Split(',');


                                Vector3 PosBaby = new Vector3(float.Parse(PosTemp[0]), float.Parse(PosTemp[1]), 0);

                                loginButton.positions.Add(PosBaby);
                             

                            }
                        }
                    }
                }
                finish = 1;
            }


        });



    }


    public void enterGame()
    {
        SceneManager.LoadScene("Game1");
    }
}
