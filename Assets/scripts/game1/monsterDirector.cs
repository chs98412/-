using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class monsterDirector : MonoBehaviour
{


    public GameObject villain1;
    public GameObject villain2;
    public GameObject villain3;
    public GameObject villain4;
    public GameObject villain5;
    public GameObject villain6;

    public List<GameObject> List_villains = new List<GameObject>();


    // Start is called before the first frame update
    void Start()
    {
        List_villains.Clear();
        for (int i = 0; i < 3; i++)
        {
            if (loginButton.positions[i].x != 0 && loginButton.positions[i].y != 0)
            {
                GameObject vill = Instantiate(villain1) as GameObject;
                vill.transform.position = loginButton.positions[i];
                List_villains.Add(vill);
            }
        }

        for (int i = 3; i < 6; i++)
        {
            if (loginButton.positions[i].x != 0 && loginButton.positions[i].y != 0)

            {
                GameObject vill = Instantiate(villain2) as GameObject;
                vill.transform.position = loginButton.positions[i];

                List_villains.Add(vill);
            }
        }
        for (int i = 6; i < 9; i++)
        {
            if (loginButton.positions[i].x != 0 && loginButton.positions[i].y != 0)

            {
                GameObject vill = Instantiate(villain3) as GameObject;
                vill.transform.position = loginButton.positions[i];

                List_villains.Add(vill);
            }
        }
        for (int i = 9; i < 12; i++)
        {
            if (loginButton.positions[i].x != 0 && loginButton.positions[i].y != 0)

            {
                GameObject vill = Instantiate(villain4) as GameObject;
                vill.transform.position = loginButton.positions[i];

                List_villains.Add(vill);
            }
        }
        for (int i = 12; i < 15; i++)
        {
            if (loginButton.positions[i].x != 0 && loginButton.positions[i].y != 0)

            {
                GameObject vill = Instantiate(villain5) as GameObject;
                vill.transform.position = loginButton.positions[i];

                List_villains.Add(vill);
            }
        }
        for (int i = 15; i < 18; i++)
        {
            if (loginButton.positions[i].x != 0 && loginButton.positions[i].y != 0)

            {
                GameObject vill = Instantiate(villain6) as GameObject;
                vill.transform.position = loginButton.positions[i];

                List_villains.Add(vill);
            }
        }



    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
 