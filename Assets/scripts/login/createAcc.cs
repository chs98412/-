using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Firebase;
using Firebase.Database;

public class createAcc : MonoBehaviour
{
    class User
    {
        // 순위 정보를 담는 Rank 클래스
        // Firebase와 동일하게 name, score, timestamp를 가지게 해야함
        public string Name;
        public string PASSWORD;

        public string closet;
        public int pangpangColor;
        public int score;
        public int totalCoin;


        // JSON 형태로 바꿀 때, 프로퍼티는 지원이 안됨. 프로퍼티로 X

        public User(string Name, string PASSWORD, string closet, int pangpangColor, int score, int totalCoin)
        {
            // 초기화하기 쉽게 생성자 사용
            this.Name = Name;
            this.PASSWORD = PASSWORD;
            this.closet = closet;
            this.pangpangColor = pangpangColor;
            this.score = score;
            this.totalCoin = totalCoin;
        }
    }





    public InputField nameInput;


    public InputField password1;
    public InputField password2;
    public InputField IDCreate;
    public Text passwordCK;
    public Text IDCk;
    public GameObject createAccpanel;







    public DatabaseReference reference { get; set; }
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Join()
    {
        if (IDCreate.text.Length < 5) IDCk.text = "아이디가 너무 짧습니다";
        else if (password1.text.Length < 5) passwordCK.text = "비밀번호가 너무 짧습니다";
        else
        {
            if (password1.text == password2.text)
                IDCheck();
            else passwordCK.text = "달라";
        }
    }

    public void IDCheck()
    {
        bool exist = false;
        reference = FirebaseDatabase.DefaultInstance.GetReference("users");

        reference.GetValueAsync().ContinueWith(task =>
        {


            if (task.IsCompleted)
            { // 성공적으로 데이터를 가져왔으면
                DataSnapshot snapshot = task.Result;

                foreach (DataSnapshot data in snapshot.Children)
                {
                    if (data.Key == IDCreate.text)
                    {
                        Debug.Log("중복");
                        exist = true;
                    }
                    else
                    {
                        exist = false;

                    }
                }
                if (!exist) CreateInfo();
            }
        });

                   // 데이터를 출력하고자 할때는 Snapshot 객체 사용함

    }

    public void IDmessaging()
    {

        IDCk.text = "이미 존재하는 아이디입니다.";

    }


    public void CreateInfo()
    {
        reference = FirebaseDatabase.DefaultInstance.RootReference;

        User user = new User(nameInput.text, password1.text, "0;0;0;0;0;0;0", 0, 1, 0);
        string json = JsonUtility.ToJson(user);



        reference.Child("users").Child(IDCreate.text).SetRawJsonValueAsync(json);


    }

    public void SetcreateAccPanel()
    {
        createAccpanel.SetActive(false);
    }

}
