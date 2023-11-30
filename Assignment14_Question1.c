#include<stdio.h>
#include<stdlib.h>

/*
    Input : 6
        Elements : 85   66  3   80  93  88 
    Output : 3
 
   */

int Frequency(int Arr[], int iSize)
{
    int iCnt = 0;
    int iFreq = 0;

    for (iCnt = 0; iCnt<iSize; iCnt++)

    {
       if ((Arr[iCnt]%2)==0)
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

   iRet =  Frequency(ptr,iCount);

   printf("The Frequency of Even Numbers : %d\n",iRet);

    free(ptr);

    return 0;
}
