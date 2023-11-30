#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char cValue)
{
    int iCnt = 0;

    if ((cValue>='A') && (cValue<='Z')) //or we can write if ((cValue>='65') && (cValue<='90'))
    {
        return true;
    }
    else
    {
        return false;
    }
    
    

}

int main()
{
    char ch = '\0';
    bool bRet = false;

    printf("Enter the Character : \n");
    scanf("%c",&ch);

    bRet = CheckCapital(ch);

    if (bRet==true)
    {
       printf("Its a Capital Letter \n");
    }
    else
    {
        printf("Its a Small Letter \n");
    }
    
    return 0;
}