#include<stdio.h>

/*
    
    Input : 4
    Output : -4 -3  -2  -1  0   1   2   3   4
*/

void Display(int iNo)
{
    int iCnt = 0;

    for (iCnt=-4; iCnt<=iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
     printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
