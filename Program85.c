#include<stdio.h>
// for printing the pattern like this : *   *   *   *   *   *   *   *   *   *   

void Display()
{
    int i= 1;

    for ( i = 1; i <= 6; i++)
    {
        printf("*\t");
    }
    printf("\n");
    
}

int main()
{
    int iValue = 0;

    Display();

    return 0;
}
