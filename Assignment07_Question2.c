
/*
    
    Input : 9
    Output : Nine

    Input : -3
    Output : Invalid Number

    Input : 12
    Output : Invalid Number
*/

#include <stdio.h>

void Display(int iNo) 
{
    // Array to hold the English word representation of numbers from 0 to 10
    
    char* words[] = 
        {
        "Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
        "Ten"
        };

    // Check for the special case when iNo is less than 0

    if (iNo < 0) {
        printf("Invalid Number\n");
    }
    // Check if iNo is between 0 and 9 (inclusive)
    else if (iNo >= 0 && iNo <= 9) 
    {
        printf("%s\n", words[iNo]);
    } 
    else
    {
        printf("Invalid Number\n");
    }
}

int main() {
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

