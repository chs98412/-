using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class StageDirector : MonoBehaviour
{
    public static int stageNumber;

    //지선추가변수
    public static int acc=0;
    //public static int mycoin = 0;

    public GameObject villain1;
    public GameObject villain2;

    public GameObject villain3;

    public GameObject villain4;

    public GameObject villain5;

    public GameObject villain6;

    GameObject MonsterDirector;

    public static int killCount;

    int finNum;

    // Start is called before the first frame update
    void Start()
    {
        killCount = 0;
        acc += stageNumber;     //stagenum을 축적해서 더해준다
      

        MonsterDirector = GameObject.Find("MonsterDirector");

        finNum = MonsterDirector.GetComponent<monsterDirector>().List_villains.Count;

        Debug.Log("킬 카운트      " + killCount);
        Debug.Log("몇마리 죽여야하나요     " + finNum);
    }

    // Update is called once per frame
    void Update()
    {
        Debug.Log("킬 카운트      " + killCount);

        if ((killCount >0 )&& (MonsterDirector.GetComponent<monsterDirector>().List_villains.Count==0))
        {
            Debug.Log("게임끝!!!!!!1");
            SceneManager.LoadScene("Game1End");
        }
        
        if (stageNumber == 1)
        {
            Destroy(villain2);
            Destroy(villain3);
            Destroy(villain4);
            Destroy(villain5);
            Destroy(villain6);
           
        }
        if (stageNumber == 2)
        {
            Destroy(villain3);
            Destroy(villain4);
            Destroy(villain5);
            Destroy(villain6);
        }
        if (stageNumber == 3)
        {
            
            Destroy(villain4);
            Destroy(villain5);
            Destroy(villain6);

        }
        if (stageNumber == 4)
        {
            
            Destroy(villain5);
            Destroy(villain6);
        }
        if (stageNumber == 5)
        {
            
            Destroy(villain6);

        }
        if (stageNumber == 6)
        {
            
        }


    }
    public void gohome()
    {
        GameDirector.totalCoin+= maincharac.coinPoint;
        acc = 0;
        maincharac.coinPoint = 0;
        maincharac.lifePoint = 0;
        SceneManager.LoadScene("Home");
    }


}
