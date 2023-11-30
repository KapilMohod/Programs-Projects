#include<stdio.h>

int Count(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
        {
        iCnt++;
        }
         iNo = iNo/10;
    }
   return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);
 
    /*
    Input: 2395
    Output: 3

    Input: 1018
    Output: 3

    Input: 9440
    Output: 3

    Input: 96672
    Output: 1

    */

    iRet = Count(iValue);

    printf("Number of count are : %d\n",iRet);

    return 0;
}