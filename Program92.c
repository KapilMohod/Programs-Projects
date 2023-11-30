#include<stdio.h>
/*
    
*/

void Display(int iNo)
{
    int i= 0;
    char ch = 'a';

    for ( i =1; i <= iNo; i++)
    {
        
        printf("%c\t",ch);
        ch++;
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
