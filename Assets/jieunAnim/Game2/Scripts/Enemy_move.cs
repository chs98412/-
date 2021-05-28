using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class Enemy_move : baseVillain
{
   

    private Animator animator;
    Rigidbody2D rigid;
    int nextMove;
    public GameObject bullet;

    GameObject monsterDirec;



    //혁순추가
    GameObject maincharac;

    int direc_temp_x;
    int direc_temp_y;
    int direc;

    void update() 
    {

        villainmove();
    }
    // Start is called before the first frame update
    void Start()
    {
        maincharac = GameObject.Find("maincharac"); //혁순추


        StartCoroutine("CircleFire");
        //?????? ????????
        //Invoke???? ?????? ?? ??????. ???? ?????? while????  return new WaitForSeconds?? ????
        // maincharac = GameObject.Find("maincharac");
        monsterDirec = GameObject.Find("MonsterDirector");

    }


    void Awake()
    {
        animator = GetComponent<Animator>();
        rigid = GetComponent<Rigidbody2D>();
        Think();

        
        Invoke("Think", 5);
        //5?? ???? Think???? ????
    }
    void FixedUpdate()
    {
        //rigid.velocity = new Vector3(nextMove, nextMove, 0f);
    }
    void Think()
    {
        nextMove = Random.Range(-1, 2);
        //Think();  ->???????? : ?????????? ?????? ???? / ???? ???? ???????? ??????????
        Invoke("Think", 5);
    }
    // Update is called once per frame
    new void Update()
    {
        base.Update();

    }
    //?????????? ???????? ???????? ?????? ???? ???????? ?????? ?????? ?????? ???????? ???????????? ????
    private IEnumerator CircleFire()
    {

        float attckRate = 5f; //????????
        int count = 10;
        
       


        while (true)
        {
            for (int i = 0; i < count; ++i)
            {
                GameObject clone = Instantiate(bullet, transform.position, Quaternion.identity); //p
                
                float x = Mathf.Cos(Mathf.PI * 2 * i / count);
                float y = Mathf.Sin(Mathf.PI * 2 * i / count);

                clone.GetComponent<Movement2D>().Setup(new Vector3(x, y,0));


            }
            yield return new WaitForSeconds(attckRate);//attckRate???????? ?????? ?? ????
        }
       

    }
    void OnTriggerEnter2D(Collider2D a)
    {
        if (a.gameObject.tag == "mainbullet")
        {
            Debug.Log("? ??");
            Debug.Log(HP.fillAmount);
            HP.fillAmount -= 0.1f;
        }

        if (HP.fillAmount == 0)
        {
            StageDirector.killCount += 1;

            monsterDirec.GetComponent<monsterDirector>().List_villains.Remove(gameObject);
            item();
            Destroy(gameObject);
        }

    }



    void item()
    {
        int item = Random.Range(1, 3);
        if (item == 1)
        {
            GameObject coinI = Instantiate(coin) as GameObject;
            coinI.transform.position = new Vector3(this.transform.position.x, this.transform.position.y, 0);
        }

        else
        {
            GameObject lifeI = Instantiate(life) as GameObject;
            lifeI.transform.position = new Vector3(this.transform.position.x, this.transform.position.y, 0);
        }
    }


    //혁순추ㅍ

    public void villainmove()
    {


        villainMoveTimer += Time.deltaTime;

        if (villainMoveTimer > villainMoveRate)
        {
            villainMoveTimer = 0;

            if (maincharac != null)
            {
                if (transform.position.x < maincharac.transform.position.x) direc_temp_x = 1;
                else direc_temp_x = 2;

                if (transform.position.y < maincharac.transform.position.y) direc_temp_y = 3;
                else direc_temp_y = 4;
                if (Mathf.Abs(transform.position.x - maincharac.transform.position.x) < 2 * Mathf.Abs(transform.position.y - maincharac.transform.position.y))
                    direc = direc_temp_y;
                else direc = direc_temp_x;

            }
            switch (direc)
            {
                case 1:
                    transform.Translate(villanFootStep, 0, 0);  //오른쪽 움직임 추후에 애니메이션 적용
                    break;

                case 2:
                    transform.Translate(-villanFootStep, 0, 0);  //왼쪽 움직임 추후에 애니메이션 적용
                    break;
                case 3:
                    transform.Translate(0, villanFootStep, 0);   //위쪽 움직임 추후에 애니메이션 적용
                    break;
                case 4:
                    transform.Translate(0, -villanFootStep, 0);  //아래쪽 움직임 추후에 애니메이션 적용
                    break;
            }

        }
    }


}
