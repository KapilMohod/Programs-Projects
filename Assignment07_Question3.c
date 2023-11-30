#include <stdio.h>

/*
    
    Input : 5
    Output : 120    (5*4*3*2*1)

    Input : -5
    Output : Invalid Input (Factorial is not defined for negative numbers)

    Input : 4
    Output : 24    (4*3*2*1)
*/

int CalculateFactorial(int iNo) {
    int iCnt;
    int iResult = 1;

    if (iNo < 0) {
        printf("Invalid Input (Factorial is not defined for negative numbers)\n");
        return -1; // Indicate an error condition
    } else {
        for (iCnt = 1; iCnt <= iNo; iCnt++) {
            iResult *= iCnt;
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
        printf("The Factorial of the given number is: %d\n", iRet);
    }

    return 0;
}
