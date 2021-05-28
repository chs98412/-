using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class life : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {

    }

    void OnTriggerEnter2D(Collider2D a)
    {

        if (a.gameObject.name == "maincharac")
        {
            Destroy(gameObject);

            maincharac.lifePoint += 1;  //지선수정

        }




    }


    void endGame1()
    {
        SceneManager.LoadScene("game1End");
    }
}
