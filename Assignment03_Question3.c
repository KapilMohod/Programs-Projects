#include <stdio.h>

void DisplayFactor(int iNo)
{
    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    printf("The even factors of %d are: ", iNo);

    for (int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iNo % iCnt == 0 && iCnt % 2 == 0)
        {
            printf("%d ", iCnt);
        }
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the number: \n");
    scanf("%d", &iValue); 

    /*
        Input : 36
        Output : 2  6   12  18

    */

    DisplayFactor(iValue);

    return 0;
}
