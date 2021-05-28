using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Experimental.U2D.Animation;
using UnityEngine.UI;

public class shopManager : MonoBehaviour
{
    SpriteResolver spriteResolver;
    public GameObject head;   //팡팡이 얼굴에 접근하기 위함

    [SerializeField]
    GameObject popUp;

    GameObject lockbtn;

    [SerializeField]
    GameObject child;

    string nowBody;

    // Start is called before the first frame update
    void Start()
    {   
        spriteResolver = head.GetComponent<SpriteResolver>();

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
                nowBody = "forespang";
                break;
        }

        //DB에서 불러온 값으로 얼굴을 바꿔준다.
        spriteResolver.SetCategoryAndLabel("Head", nowBody);
    }

    // Update is called once per frame
    public void changeOrignpang()
    {
        //얼굴 바꿔
        spriteResolver.SetCategoryAndLabel("Head", "Pang");


        //현재 몸 이름을 저장해
        GameDirector.nowBody = 1;
        Debug.Log(GameDirector.nowBody);

    }
    public void changeHypang()
    {

        spriteResolver.SetCategoryAndLabel("Head", "hypang");

        GameDirector.nowBody = 2;
        Debug.Log(GameDirector.nowBody);
    }
    public void changeHspang()
    {
        spriteResolver.SetCategoryAndLabel("Head", "hspang");

        GameDirector.nowBody = 3;
        Debug.Log(GameDirector.nowBody);
    }
    public void changeSonpang()
    {
        spriteResolver.SetCategoryAndLabel("Head", "sonpang");


        GameDirector.nowBody = 4;
        Debug.Log(GameDirector.nowBody);
    }
    public void changeJspang()
    {
        spriteResolver.SetCategoryAndLabel("Head", "jspang");

        GameDirector.nowBody = 5;
        Debug.Log(GameDirector.nowBody);
    }
    public void changeForestpang()
    {
        spriteResolver.SetCategoryAndLabel("Head", "forestpang");

        GameDirector.nowBody = 6;
        Debug.Log(GameDirector.nowBody);
    }
    public void unlock()
    {
        //누른 락 버튼이 어떤 버튼인지 알기위해 그 이름을 저장하고 그 이름을 가진 오브젝트를 찾아서 lockbtn에 저장
        string ButtonName = EventSystem.current.currentSelectedGameObject.name; 
        lockbtn = GameObject.Find(ButtonName);

        //구매 여부를 한번 더 물어보기 위해 팝업창이 뜬다
        popUp.SetActive(true);
      
      
    }

    public void clickYes()
    {
        Debug.Log(lockbtn.name);
        int cost = 0;

        switch (lockbtn.name)
        {
            case "lock1":
                cost = 10;

                //옷장에 옷이 들어감
                GameDirector.closet[0] = 1;
          
                break;
            case "lock2":
                cost = 10;
                GameDirector.closet[1] = 1;
          
                break;
            case "lock3":
                cost = 20;
                GameDirector.closet[2] = 1;
            
                break;
            case "lock4":
                cost = 20;
                GameDirector.closet[3] = 1;
                break;
            case "lock5":
                cost = 30;
                GameDirector.closet[4] = 1;
                break;


        }
        
        //가진 돈이 없는 경우 잔액부족
        if (GameDirector.totalCoin   < cost)
        {
            child.GetComponent<Text>().text = "잔액부족";
        }
        //가진 돈에서 옷 금액 만큼 자감되고 락 버튼이 풀리고, 팝업창 사라짐
        else
        {
            GameDirector.totalCoin -= cost;
            lockbtn.SetActive(false);
            popUp.SetActive(false);
        }
        
    }
    public void clickNo()
    {
        //팝업창 사라
        popUp.SetActive(false);
        child.GetComponent<Text>().text = "구매하시겠습니까?";
    }
}
