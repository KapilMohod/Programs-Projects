#include<stdio.h>
#include<stdlib.h>

/*
    Input : N : 6
            Start : 60
            End : 90

            Element : 85    66  3   76  93  88
    Output : 66 76  88

    Input : N : 6
            Start : 30
            End : 50

            Element : 85    66  3   76  93  88
    Output : 
       

*/


void Range(int Arr[], int iSize, int iStart,int iEnd)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt<iSize; iCnt++)

    {
       if (Arr[iCnt]>iStart && Arr[iCnt]<iEnd)
       {
           printf("%d\t", Arr[iCnt]);
       }
    }
    
}
int main()
{
    
    int iCount = 0;
    int iValue1 = 0;
    int iValue2 = 0;
    int *ptr = NULL;
    int iCnt = 0;
   

    printf("Enter the No. of Elements : \n");
    scanf("%d",&iCount);

    printf("Enter the Starting Point : \n");
    scanf("%d",&iValue1);

    printf("Enter the Ending Point : \n");
    scanf("%d",&iValue2);

    ptr = (int *)malloc(iCount * sizeof(int));

    for (iCnt= 0; iCnt < iCount; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }


    Range(ptr, iCount, iValue1, iValue2);
    
    free(ptr);

    return 0;
}
