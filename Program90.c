#include<stdio.h>
/*
    Input : 4
    Output: 1   #   2   #   3   #   5   #
*/

void Display(int iNo)
{
    int i= 0;

    for ( i = 1; i <= iNo; i++)
    {
        
        printf("%d\t#\t",i);
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
