#include<stdio.h>

/*
    
    Input : 8
    Output : 1  2   3   4   5   6   7   8

*/

void Display(int iNo)
{
    int iCnt = 0;

    for (iCnt=1; iCnt<=iNo; iCnt++)
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
