#include<stdio.h>
#include<stdlib.h>

/*
    Input : 7
        Elements : 85   66  3   80  93  88 90
    Output : 1  (4-3)
 
   */

int Frequency(int Arr[], int iSize)
{
    int iCnt = 0;
    int iEvenFreq = 0;
    int iOddFreq = 0;
    int iDiff = 0;

    for (iCnt = 0; iCnt<iSize; iCnt++)

    {
       if ((Arr[iCnt]%2)==0)
       {
            iEvenFreq++;
       }
       else
       {
            iOddFreq++;
       }            
    }
    iDiff = iEvenFreq - iOddFreq;
    return iDiff;
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

   iRet =  Frequency(ptr,iCount);

   printf("The Difference of Frequency of Even & Odd Numbers are : %d\n",iRet);

    free(ptr);

    return 0;
}
