#include<stdio.h>
/*
    Input: 4
    Output: a c e g
*/

void Display(int iNo)
{
    int i= 0;
    char ch = '\0';

    for ( i =iNo, ch = 'D'; i >= 1; i--,ch--)
    {
        
        printf("%c\t",ch);

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
