#include<stdio.h>
#include<stdlib.h>
typedef int Bool;
#define True 1
#define False 0

/*
    Input : 6
        Elements : 85   66  11   80  93  88 
    Output : 11 is present

    Input : 6
        Elements : 85   66  3   80  93  88 
    Output : 11 is Absent
 
   */

Bool Check(int Arr[], int iSize)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt<iSize; iCnt++)

    {
       if (Arr[iCnt]==11)
       {
           return True;
       }
                     
    }
    return False;  
    
}

int main()
{
    
    int iCount = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int bRet = False;
   

    printf("Enter the No. of Elements : \n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));

    for (iCnt= 0; iCnt < iCount; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

   bRet =  Check(ptr,iCount);

   if (bRet==True)
   {
        printf("11 is Present");
   }
   else
   {
        printf("11 is Absent");
   }
   
    free(ptr);

    return 0;
}
