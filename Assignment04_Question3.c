#include<stdio.h>
#include<stdbool.h>

void DisplayNonFactors(int iNo)
{
    int iCnt = 0;

    printf("Factors of %d are : \n",iNo);
    
    for(iCnt = 1; iCnt <= (iNo/1); iCnt++)
    {
        if((iNo % iCnt) != 0)  
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{   
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    /*
        Input : 12
        Output : 5  7   8   9   10  11

        Input : 13
        Output : 2  3   4   5   6   7   8   9   10  11  12

        Input : 10
        Output : 3  4   6   7   8   9

    */

    DisplayNonFactors(iValue);

    return 0;
}

// Time Complexity : O(N/2)

