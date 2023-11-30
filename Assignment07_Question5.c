/*
    
    Input : 2
    Input 2 : 5
    Output : 20 18  16  14  12  10  8   6   4   2   0

    Input : 5
    Input : 5
    Output : 50  45 40  35  30  25  20  15  10  5   0

    Input : -5
    Input : 5
    Output : 50  45 40  35  30  25  20  15  10  5   0
*/

#include <stdio.h>

void Table(int iNo, int iMulti) 
{
    int iCnt = 0;

    for (iCnt = 2 * iMulti; iCnt>=0; iCnt--)
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

