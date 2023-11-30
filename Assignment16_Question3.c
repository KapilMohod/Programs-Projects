#include<stdio.h>
#include<stdlib.h>

/*
   Input : N : 6
          Elements : 85 66  3 66  93  88

   Output : 90        

*/


int Difference(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMin = Arr[0];
    int iMax = Arr[0];
    int iDiff = 0;

    for (iCnt = 0; iCnt<iSize; iCnt++)

    {
      if (Arr[iCnt]>iMax)
      {
        iMax = Arr[iCnt];
      }
      else if (Arr[iCnt]<iMin)
      {
         iMin = Arr[iCnt];
      }
      
    }
    
    iDiff = iMax - iMin;
    return iDiff;
}
int main()
{
    
    int iCount = 0;
    int *ptr = NULL;
    int iValue = 0;
    int iCnt = 0;
    int iRet = 0;
   

    printf("Enter the No. of Elements : \n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));

    for (iCnt= 0; iCnt < iCount; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }


    iRet = Difference(ptr, iCount);
    printf("The Difference of Max & Min is : %d\n",iRet);
    
    free(ptr);

    return 0;
}
