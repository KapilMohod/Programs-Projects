#include<stdio.h>

void printEven(int iNo)
{
    int iCnt = 0;

    if (iNo<=0)
    {
        return ;

    }

        printf("The Even Numbers are : \n");

        for (iCnt = 2; iCnt<=iNo*2; iCnt+=2)
        {
            printf("%d ", iCnt);
        }
        
        printf("\n");
    
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);
    /*
        Input : 7
        Output : 2 4 6 8 10 12 14

    */

    printEven(iValue); //7

    return 0;
}
