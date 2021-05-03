using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class maincharac : MonoBehaviour
{
    GameObject heart1;
    GameObject heart2;

    GameObject heart3;

    GameObject heart4;

    GameObject heart5;
    int count;

    public GameObject mainbullet;

    // Start is called before the first frame update
    void Start()
    {
        heart1 = GameObject.Find("Heart1");
        heart2 = GameObject.Find("Heart2");

        heart3 = GameObject.Find("Heart3");

        heart4 = GameObject.Find("Heart4");

        heart5 = GameObject.Find("Heart5");

    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKey(KeyCode.LeftArrow)){
            transform.Translate(-0.1f, 0, 0);
            Debug.Log("left");
        }
        else if (Input.GetKey(KeyCode.RightArrow))
        {
            transform.Translate(0.1f, 0, 0);
            Debug.Log("right");
        }
        else if(Input.GetKey(KeyCode.UpArrow))
        {
            transform.Translate(0, 0.1f, 0);
            Debug.Log("up");
        }
        else if(Input.GetKey(KeyCode.DownArrow))
        {
            transform.Translate(0, -0.1f, 0);
            Debug.Log("down");
        }

        if (Input.GetKeyDown(KeyCode.Space))
        {
            GameObject go = Instantiate(mainbullet) as GameObject;
            go.transform.position = new Vector3(this.transform.position.x,this.transform.position.y,0);
        }
        
    }


    void OnTriggerEnter2D(Collider2D a)
    {


        if (a.GetComponent<villainbullet>().isvillainBullet == 1)
        {
            count += 1;
            Debug.Log("뿅!");
            a.GetComponent<villainbullet>().ishit = 1;


            switch (count)
            {
                case 1:
                    Destroy(heart1);
                    break;
                case 2:
                    Destroy(heart2);
                    break;
                case 3:
                    Destroy(heart3);
                    break;
                case 4:
                    Destroy(heart4);
                    break;
                case 5:
                    Destroy(heart5);
                    break;
            }

        }

    }
}
