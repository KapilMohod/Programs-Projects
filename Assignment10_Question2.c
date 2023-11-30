/*
    Input : 23  35
    Output : 24 26  28  30  32  34

    Input : 10  18
    Output : 10 12  14  16  18

    Input : 10  10
    Output : 10

    Input : -10 2
    Output : -10    -8  -6  -4  -2  0   2

    Input : 90  18
    Output: Invalid Range
*/


#include<stdio.h>

void RangeEvenDisplay(int iStart, int iEnd)
{

    for (iStart; iStart<=iEnd; iStart++)
    {
        if ((iStart % 2)==0)
        {
           printf("%d\t",iStart);
        }
        
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the Starting Point : \n");
    scanf("%d",&iValue1);

    printf("Enter the Ending Point : \n");
    scanf("%d",&iValue2);

    RangeEvenDisplay(iValue1,iValue2);

    return 0;
}