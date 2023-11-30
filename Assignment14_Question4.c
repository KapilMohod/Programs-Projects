#include<stdio.h>
#include<stdlib.h>

/*
    Input : 6
        Elements : 85   66  3   15  93  88 
    Output : 0

    Input : 6
        Elements : 85   11  3   15  11  111 
    Output : 2
 
   */

int Check(int Arr[], int iSize)
{
    int iCnt = 0;
    int iFreq = 0;

    for (iCnt = 0; iCnt<iSize; iCnt++)

    {
       if ((Arr[iCnt]==11))
       {
            iFreq++;
       }
    }
    return iFreq;
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

    iRet = Check(ptr,iCount);
    printf("Frequency of 11 is : %d\n",iRet);

    free(ptr);

    return 0;
}
