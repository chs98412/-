using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class mainCam : MonoBehaviour
{
    GameObject maincharac;
    // Start is called before the first frame update
    void Start()
    {
        maincharac = GameObject.Find("maincharac");
    }

    // Update is called once per frame
    void Update()
    {
        Vector3 playerPos = maincharac.transform.position;
        transform.position = new Vector3(playerPos.x, playerPos.y, -10);

      
    }
}
