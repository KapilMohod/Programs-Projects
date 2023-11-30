#include<stdio.h>
#include<stdlib.h>

/*
    Input : N : 6
           
            Element : 15    66  3   70  10  88
    Output : 45

      Input : N : 6
           
            Element : 44    66  72   70  10  88
    Output : 0
       

*/


int Range(int Arr[], int iSize)
{
    int iCnt = 0;
    int iOddProduct = 1;

    for (iCnt = 0; iCnt<iSize; iCnt++)

    {
      if ((Arr[iCnt]%2)!=0)
      {
        iOddProduct = iOddProduct * Arr[iCnt]; 
      }
      
    }
    return iOddProduct;
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


    iRet = Range(ptr, iCount);
    printf("The Product of all Odd Elements are : %d\n",iRet);
    
    free(ptr);

    return 0;
}
