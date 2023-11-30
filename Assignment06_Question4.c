#include<stdio.h>

/*
    
    Input : 18
    Output : 1  3   5   7   9   11  13  15  17
*/

void Display(int iNo)
{
    int iCnt = 0;

    for (iCnt=1; iCnt<=iNo; iCnt++)
    {
        if((iCnt%2)!=0)
        {
            printf("%d\t",iCnt);
        }
        
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
