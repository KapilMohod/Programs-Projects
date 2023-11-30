#include <stdio.h>

void Display(int iNo1, int iNo2)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iNo2; iCnt++)
    {
        printf("Display the Number which I want: %d\n", iNo1);
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the Number: \n");
    scanf("%d", &iValue1);

    printf("Enter the Frequency: \n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}
