using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.Experimental.U2D.Animation;


public class maincharac : MonoBehaviour
{
    //cool time
    private float curTime;
    public float coolTime = 1.0f;
    
    int count;

    public GameObject mainbullet;
    GameObject villain;
    float x;
    float y;
    float angle;
    

    //혁순변수추가부분
    public static int coinPoint;

    //지선변수 추가부분
    public static int lifePoint;

    //몸을 바꾸기 위해
    string nowBody;
    SpriteResolver spriteResolver;
    //maincharac 게임 오브젝트 안에 자식 오브젝트 중 head를 넣어주면 된다
    public GameObject head;

    float distance;

    GameObject closeMonster;

    public int lifepoint;

    float dis;

    public Image mainHP;
    GameObject monsterDirec;

    // Start is called before the fi rst frame update
    void Start()
    {
        villain = GameObject.Find("villain");
        mainHP.fillAmount = 1f;

        spriteResolver = head.GetComponent<SpriteResolver>();

       // Debug.Log("지금몸" + GameDirector.nowBody);

        switch (GameDirector.nowBody)
        {

            case 1:
                nowBody = "Pang";
                break;
            case 2:
                nowBody = "hypang";
                break;
            case 3:
                nowBody = "hspang";
                break;
            case 4:
                nowBody = "sonpang";
                break;
            case 5:
                nowBody = "jspang";
                break;
            case 6:
                nowBody = "forestpang";
                break;
        }

        //DB에서 불러온 값으로 얼굴을 바꿔준다.
        spriteResolver.SetCategoryAndLabel("Head", nowBody);

        monsterDirec = GameObject.Find("MonsterDirector");
    }

    // Update is called once per frame
    void Update()
    {
        //hp바 피사체 따라다니기
        mainHP.transform.position = Camera.main.WorldToScreenPoint(this.transform.position + new Vector3(0, -1.3f, 0));

      

        //팡팡이움직임
        if (Input.GetKey(KeyCode.LeftArrow)){
            transform.Translate(-0.1f, 0, 0);
            //Debug.Log("left");
        }
        else if (Input.GetKey(KeyCode.RightArrow))
        { 
            transform.Translate(0.1f, 0, 0);
            //Debug.Log("right");
        }
        else if(Input.GetKey(KeyCode.UpArrow))
        {
            transform.Translate(0, 0.1f, 0);
            //Debug.Log("up");
        }
        else if(Input.GetKey(KeyCode.DownArrow))
        {
            transform.Translate(0, -0.1f, 0);
            //Debug.Log("down");
        }

        if (curTime <= 0) {
            //바나나던지기
            if (Input.GetKeyDown(KeyCode.Space))
            {




                curTime = coolTime;
                GameObject go = Instantiate(mainbullet) as GameObject;

                go.transform.position = new Vector3(this.transform.position.x, this.transform.position.y, 0);





                foreach (GameObject A in monsterDirec.GetComponent<monsterDirector>().List_villains)
                {
                    if (monsterDirec.GetComponent<monsterDirector>().List_villains.IndexOf(A) == 0)
                    {
                        dis = Vector3.SqrMagnitude(A.transform.position - this.transform.position);
                        closeMonster = A;
                    }
                    else
                    {
                        if ( dis > Vector3.SqrMagnitude(A.transform.position - this.transform.position)){
                            dis = Vector3.SqrMagnitude(A.transform.position - this.transform.position);
                            closeMonster = A;

                        }
                    }

                }




                x = transform.position.x - closeMonster.transform.position.x;
                y = transform.position.y - closeMonster.transform.position.y;

                //Hypotenuse = Mathf.Sqrt(Mathf.Abs(x)* Mathf.Abs(x)+ Mathf.Abs(y)+ Mathf.Abs(y));
                //Debug.Log("x" + x);
                //Debug.Log("y" + y);
                //Debug.Log("빗변" + Hypotenuse);

                angle = Mathf.Atan2(Mathf.Abs(y), Mathf.Abs(x)) * Mathf.Rad2Deg;

                //distance = Vector2.Distance(villain.transform.position, transform.position);
                //Debug.Log("두 객체 사이 거리"+distance);


                if (x < 0 && y < 0)
                    go.transform.Rotate(0, 0, angle);

                else if (x > 0 && y < 0)
                    go.transform.Rotate(0, 0, 180 - angle);
                else if (x < 0 && y > 0)
                    go.transform.Rotate(0, 0, -angle);

                else if (x > 0 && y > 0)
                    go.transform.Rotate(0, 0, 180 + angle);
            }

        }
        else
        {
            curTime -= Time.deltaTime;
        }
        
    }

    void OnTriggerEnter2D(Collider2D a)
    {
        //충돌시 이벤트
        if (a.gameObject.tag == "villainbullet")
        {
            mainHP.fillAmount -= 0.1f;
        }
            
        

        if (mainHP.fillAmount == 0)
        {
            endGame1();

        }
    }
    public void Attack()
    {
        GameObject go = Instantiate(mainbullet) as GameObject;

        go.transform.position = new Vector3(this.transform.position.x, this.transform.position.y, 0);




        x = transform.position.x - closeMonster.transform.position.x;
        y = transform.position.y - closeMonster.transform.position.y;

    
        angle = Mathf.Atan2(Mathf.Abs(y), Mathf.Abs(x)) * Mathf.Rad2Deg;

        if (x < 0 && y < 0)
            go.transform.Rotate(0, 0, angle);

        else if (x > 0 && y < 0)
            go.transform.Rotate(0, 0, 180 - angle);
        else if (x < 0 && y > 0)
            go.transform.Rotate(0, 0, -angle);

        else if (x > 0 && y > 0)
            go.transform.Rotate(0, 0, 180 + angle);

    }

    //피 0됐을때 씬 전환
    void endGame1()
    {
        SceneManager.LoadScene("GameOver");
    }






    
}
