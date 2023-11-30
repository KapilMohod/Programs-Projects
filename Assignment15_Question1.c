#include<stdio.h>
#include<stdlib.h>
typedef int Bool;
#define True 1
#define False 0


int Check(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt<iSize; iCnt++)

    {
       if ((Arr[iCnt]==iNo))
       {
            return True;
       }
    }
    return False;
}
int main()
{
    
    int iCount = 0;
    int iValue = 0;
    int *ptr = NULL;
    int iCnt = 0;
    Bool bRet = False;
   

    printf("Enter the No. of Elements : \n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));

    for (iCnt= 0; iCnt < iCount; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the Value you want to search : \n");
    scanf("%d",&iValue);

    bRet = Check(ptr,iCount,iValue);

    if (bRet==True)
    {
        printf("The given number is present");
    }
    else
    {
        printf("The given number is Absent");
    }
    
    free(ptr);

    return 0;
}
