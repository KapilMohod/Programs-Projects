#include<stdio.h>

/*
    
    Input : 75
    Output : Medium
*/

void Display(int iNo)
{
    if (iNo<50)
    {
       printf("Small");
    }
    else if (iNo>50 && iNo<100)
    {
       printf("Medium");
    }
    else
    {
        printf("Large");
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
