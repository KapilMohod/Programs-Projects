#include<stdio.h>
#include<stdlib.h>

/*
   Input : N : 6
          Elements : 8225      665   3     76     953    858 

   Output : 17      17      3       13      17      21      

*/


#include <stdio.h>
#include <stdlib.h>

int SumDigit(int Arr[], int iSize)
{
    for (int iCnt = 0; iCnt < iSize; iCnt++)
    {
        int num = Arr[iCnt];
        int isum = 0;

        while (num != 0)
        {
            int iDigit = num % 10;
            isum += iDigit;
            num /= 10;
        }

        Arr[iCnt] = isum;
    }
}

int main()
{
    int iCount = 0;
    int *ptr = NULL;

    printf("Enter the No. of Elements : \n");
    scanf("%d", &iCount);

    ptr = (int *)malloc(iCount * sizeof(int));

    for (int iCnt = 0; iCnt < iCount; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    SumDigit(ptr, iCount);

    printf("The Summation of each digit is: ");
    for (int i = 0; i < iCount; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    free(ptr);

    return 0;
}
