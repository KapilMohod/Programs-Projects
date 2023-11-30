#include<stdio.h>
#include<stdlib.h>

/*
    Input : 6
        Elements : 85   66  3   80  93  88
    Output : 53

    [
        Enter the No. of Elements :
6
85
66
3
80
93
88
The Difference of Even & Odd Elements are : 53
    ]    

*/

int Difference(int Arr[], int iSize)
{
    int iCnt = 0;
    int iEvenSum = 0;
    int iOddSum = 0;
    int iDifference = 0;

    for (iCnt = 0; iCnt<iSize; iCnt++)
    {
        if ((Arr[iCnt]%2)==0)
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        else
        {
            iOddSum = iOddSum + Arr[iCnt];
        }
    }

    iDifference = (iEvenSum - iOddSum);

    return iDifference;

}

int main()
{
    
    int iCount = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the No. of Elements : \n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));

    for (iCnt= 0; iCnt < iCount; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Difference(ptr,iCount);

    printf("The Difference of Even & Odd Elements are : %d\n",iRet);

    free(ptr);

    return 0;
}
