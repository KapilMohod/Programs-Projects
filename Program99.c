#include<stdio.h>
/*
    Input:  *    *   *   *
            *    *   *   *
            *    *   *   *
            *    *   *   *
            
    Output: *    *   *   *
            *    *   *   *
            *    *   *   *
            *    *   *   *
*/

void Display(int iNo)
{
    int i= 0;


    for ( i =1; i <= iNo; i++)
    {
        
        printf("*\t");

    }
    printf("\n");
    for ( i =1; i <= iNo; i++)
    {
        
        printf("*\t");

    }
    printf("\n");
    for ( i =1; i <= iNo; i++)
    {
        
        printf("*\t");

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
