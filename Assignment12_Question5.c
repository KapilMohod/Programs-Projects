#include<stdio.h>

int CountDiff(int iNo)
{
    int iSumEven = 0;
    int iSumOdd = 0;
    int idigit = 0;
    

    while(iNo != 0)
    {
       idigit = iNo % 10;

        if (idigit % 2 == 0)
        {
            iSumEven += idigit; // Add even digit to the sum of even digits
        } 
        else 
        {
            iSumOdd += idigit;  // Add odd digit to the sum of odd digits
        }

        iNo = iNo / 10;
        
    }
    
    return iSumEven-iSumOdd;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);
 
    /*
    Input: 2395
    Output: -15

    Input: 1018
    Output: 6

    Input: 8440
    Output: 16

    Input: 5733
    Output: -18

    */

    iRet = CountDiff(iValue);

    printf("Difference are : %d\n",iRet);

    return 0;
}