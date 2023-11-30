#include<stdio.h>
/*
    Input : 4
    Output : 4 3 2 1
*/

void Display(int iNo)
{
    int i= 0;

    for ( i =iNo; i >= 1; i--)
    {
        
        printf("%d\t",i);
    }
    printf("\n");
    
}

int main()
{
    int iValue = 0;

    printf("Enter the Value : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
