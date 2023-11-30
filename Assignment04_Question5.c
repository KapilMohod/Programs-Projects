#include<stdio.h>
#include<stdbool.h>

int SumFactors(int iNo)
{
    int iCnt = 0;
    int isum1 = 0;
    int isum2 = 0;
    int iDiff = 0;
    
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)  
        {
            isum1 = isum1 + iCnt;
        }
    }
    for(iCnt = 1; iCnt <= (iNo/1); iCnt++)
    {
        if((iNo % iCnt) != 0)  
        {
            isum2 = isum2 + iCnt;
        }
    }
    iDiff = isum1-isum2;
    return iDiff;
}

int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    /*
        Input : 12
        Output : -34

        Input : 10
        Output : -29

    */

    iRet = SumFactors(iValue);

    printf("%d",iRet);

    return 0;
}

// Time Complexity : O(N/2)

