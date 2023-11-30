#include <stdio.h>
#include <stdbool.h>

void DisplayRevFactors(int iNo)
{
    int iCnt = 1;
    int factors[100]; // Assuming the maximum number of factors is 100
    int factorCount = 0;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            factors[factorCount] = iCnt;
            factorCount++;
        }
    }

    // Print factors in descending order
    for (int i = factorCount - 1; i >= 0; i--) {
        printf("%d\t", factors[i]);
    }
    printf("\n");
}

int main()
{   
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    /*
        Input : 12
        Output : 6  4   3   2   1

        Input : 13
        Output : 1

        Input : 50
        Output : 5  2   1

    */

    DisplayRevFactors(iValue);

    return 0;
}
