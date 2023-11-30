#include <stdio.h>

/*
    
    Input : 5
    Output : -7    (8 - 15)

   Input : -5
    Output : -7    (8 - 15)

    Input : 10
    Output : 2895    (3840 - 945)
*/

int CalculateDiffFactorial(int iNo) {
    int iCnt;
    int iEven = 1;
    int iOdd = 1;
    int iDiff = 0;

    if (iNo < 0) {
        printf("Invalid Input (Factorial is not defined for negative numbers)\n");
        return -1; // Indicate an error condition
    } else {
        for (iCnt = 1; iCnt <= iNo; iCnt++) 
        {
            if((iCnt%2)==0)
            {
                iEven = iEven * iCnt;
            }

            else if((iCnt%2)!=0)
            {
                iOdd = iOdd * iCnt;
            }
 
        }

        iDiff = iEven - iOdd;
        return iDiff;
    }
}

int main() {
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number: ");
    scanf("%d", &iValue);

    iRet = CalculateDiffFactorial(iValue);
    
    if (iRet != -1) {
        printf("The Difference of Factorial of the given number is: %d\n", iRet);
    }

    return 0;
}
