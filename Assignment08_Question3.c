#include <stdio.h>

/*
    
    Input : 5
    Output : 8    (4*2)

    Input : -5
    Output : 8    (4*2)

    Input : 10
    Output : 3840    (10*8*6*4*2)
*/

int CalculateFactorial(int iNo) {
    int iCnt;
    int iResult = 1;

    if (iNo < 0) {
        printf("Invalid Input (Factorial is not defined for negative numbers)\n");
        return -1; // Indicate an error condition
    } else {
        for (iCnt = 1; iCnt <= iNo; iCnt++) 
        {
            if((iCnt%2)==0)
            {
                iResult *= iCnt;
            }
 
        }
        return iResult;
    }
}

int main() {
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number: ");
    scanf("%d", &iValue);

    iRet = CalculateFactorial(iValue);
    if (iRet != -1) {
        printf("The Factorial of the given Even number is: %d\n", iRet);
    }

    return 0;
}
