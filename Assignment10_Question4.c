/*
    Input : 23  30
    Output : 108

    Input : 10  18
    Output : 70

    Input : -10 2
    Output : Invalid Range

    Input : 90  18
    Output: Invalid Range
*/

#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iSum = 0;

    for (iStart; iStart<=iEnd; iStart++)
    {
        if ((iStart>=0) && ((iStart%2)==0))
        {
           iSum = iSum + iStart;
        } 
        
    }
    return iSum;
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter the Starting Point : \n");
    scanf("%d",&iValue1);

    printf("Enter the Ending Point : \n");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1,iValue2);
    printf("Sum of all Even Positive Numbers is : %d\n",iRet);

    return 0;
}