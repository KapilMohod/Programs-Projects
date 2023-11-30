#include<stdio.h>
#include<stdlib.h>

/*
    Input : N : 6
            No : 66

            Element : 85    66  3   66  93  88
    Output : 3

    Input : N : 6
            No : 93

            Element : 85    66  3   66  93  88
    Output : 4  

    Input : N : 6
            No : 12

            Element : 85    11  3   15  11  111
    Output : -1          

*/


int Check(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    int iLastIndex = -1;

    for (iCnt = 0; iCnt<iSize; iCnt++)

    {
       if ((Arr[iCnt]==iNo))
       {
            iLastIndex = iCnt;
       }
    }
    return iLastIndex;
}
int main()
{
    
    int iCount = 0;
    int iValue = 0;
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

    printf("Enter the Value you want to search : \n");
    scanf("%d",&iValue);

    iRet = Check(ptr,iCount,iValue);
    printf("Index of first Occurence of that No : %d\n",iRet,iValue);

    free(ptr);

    return 0;
}
