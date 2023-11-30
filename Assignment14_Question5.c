#include<stdio.h>
#include<stdlib.h>

/*
    Input : N : 6
            No : 66
        Elements : 85   66  3   66  93  88 
    Output : 2

   Input : N : 6
            No : 12
        Elements : 85   11  3   15  11  111 
    Output : 0

   */

int Check(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    int iFreq = 0;

    for (iCnt = 0; iCnt<iSize; iCnt++)

    {
       if ((Arr[iCnt]==iNo))
       {
            iFreq++;
       }
    }
    return iFreq;
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
    printf("Frequency of %d occurs %d times : %d\n",iValue,iRet);

    free(ptr);

    return 0;
}
