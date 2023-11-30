#include <stdio.h>
typedef int Bool;
#define true 1
#define false 2

Bool CheckEven(int iNo1)
{
    Bool bChck = true;
    
    if ((iNo1%2)==0)
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
    int iValue1 = 0;
    Bool bRet = false;

    printf("Enter the Number: \n");
    scanf("%d", &iValue1);

    bRet = CheckEven(iValue1);

    if (bRet==true)
    {
       printf("The Number is Even");
    }
    else
    {
        printf("The Number is odd");
    }
    

    return 0;
}
