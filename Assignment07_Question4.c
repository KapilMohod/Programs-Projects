/*
    
    Input : 2
    Output : 2  4   6   8   10  12  14  16  18  20

    Input : 5
    Output : 5  10  15  20  25  30  35  40  45  50

    Input : -5
    Output : 5  10  15  20  25  30  35  40  45  50
*/

#include <stdio.h>

void Table(int iNo, int iMulti) 
{
    int iCnt = 0;

    for (iCnt<=0; iCnt<=iMulti; iCnt++)
    {
       printf("%d\t",iCnt * iNo);
    }
    
    printf("\n");
}

int main() {
    int iValue = 0;
    int iValue2 = 0;

    printf("Enter the Number : \n");
    scanf("%d", &iValue);

    printf("Enter the Multiplying Number : \n");
    scanf("%d", &iValue2);

    Table(iValue,iValue2);

    return 0;
}

