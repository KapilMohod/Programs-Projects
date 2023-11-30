/*
    Input : 5
    Output : *  *   *   *   *   #   #   #   #   #

    Input : 6
    Output : *  *   *   *   *   *   #   #   #   #   #   #

    Input : -5
    Output : *  *   *   *   *   #   #   #   #   #
    
    Input : 2
    Output : *  *   #   #   


*/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t"); // Display '*' for the first set of numbers
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t"); // Display '#' for the second set of numbers
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter the Value : \n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}
