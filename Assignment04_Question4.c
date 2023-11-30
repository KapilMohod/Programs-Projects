#include<stdio.h>
#include<stdbool.h>

int SumNonFactors(int iNo)
{
    int iCnt = 0;
    int isum = 0;
    
    for(iCnt = 1; iCnt <= (iNo/1); iCnt++)
    {
        if((iNo % iCnt) != 0)  
        {
            isum = isum + iCnt;
        }
    }
    return isum;
}

int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    /*
        Input : 12
        Output : 50

        Input : 10
        Output : 37

    */

    iRet = SumNonFactors(iValue);

    printf("%d",iRet);

    return 0;
}

// Time Complexity : O(N/2)

