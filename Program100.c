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

void Display()
{
    int i= 0;
    int j = 0;


    for ( i =1; i <= 3; i++)
    {
        for ( j = 0; j <=4; j++)
        {
            
            printf("*\t");

        }
        printf("\n");
    }
   
    
}

int main()
{
    Display();
    return 0;
}
