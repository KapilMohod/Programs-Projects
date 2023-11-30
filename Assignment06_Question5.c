#include<stdio.h>

/*
    
    Input : 4
    Output : 4  8   12  14  20
*/

void Display(int iNo)
{
    int iCnt = 0;

    for (iCnt=1; iCnt<=20; iCnt++)
    {
        if((iCnt%4)==0)
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
