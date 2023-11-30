#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char cValue)
{
    int iCnt = 0;

    if ((cValue>='a') && (cValue<='z')) //or we can write if ((cValue>='97') && (cValue<='122'))....... this one is for ASCII format
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

    bRet = CheckSmall(ch);

    if (bRet==true)
    {
       printf("Its a Small Letter \n");
    }
    else
    {
        printf("Its a Capital Letter \n");
    }
    
    return 0;
}