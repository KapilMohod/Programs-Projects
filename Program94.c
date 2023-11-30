#include<stdio.h>
/*
    Input: 4
    Output: a b c d
*/

void Display(int iNo)
{
    int i= 0;
    char ch = '\0';

    for ( i =1, ch = 'a'; i <= iNo; i++,ch++)
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
