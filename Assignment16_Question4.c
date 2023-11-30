#include <stdio.h>
#include <stdlib.h>

void Digits(int Arr[], int iSize)
{
    for (int iCnt = 0; iCnt < iSize; iCnt++)
    {
        int num = Arr[iCnt];
        while (num > 0)
        {
            int iDigit = num % 10;
            if (iDigit == 3)
            {
                printf("%d ", Arr[iCnt]);
                break;  
            }
            num /= 10;
        }
    }
    printf("\n");
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

    printf("The Elements containing a 3 digit are: ");
    Digits(ptr, iCount);

    free(ptr);

    return 0;
}
