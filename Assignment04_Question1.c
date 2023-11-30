#include<stdio.h>
#include<stdbool.h>

int MultFactors(int iNo)
{
    int iCnt = 1;
    int iSum = 1;

    //      1               2       3
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)   // 4
        {
            iSum *=iCnt;
        }
    }
    return iSum;
}

int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    /*
        Input : 12
        Output : 144

        Input : 13
        Output : 1

        Input : 10
        Output : 10

    */
    
    iRet = MultFactors(iValue);
    printf("Multiplication of factors are : %d\n",iRet);

    return 0;
}

// Time Complexity : O(N/2)

