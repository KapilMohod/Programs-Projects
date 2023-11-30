#include<stdio.h> //for Printf and Scanf
#include<stdlib.h> //for malloc and free

//void Display(int* Arr, int iSize)
int Addition(int Arr[], int iSize)
{
    int iCnt = 0; 
    int iSum = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
        
    }
   return iSum;
}

int main()
{
    int iCount = 0;
    int iCnt = 0;
    int iRet = 0;
    int *ptr = NULL;

    printf("Enter the Number of Elements that you want to enter : \n");
    scanf("%d",&iCount);

    ptr = (int*)malloc(iCount * sizeof(int));

    printf("Dynamic Memory gets allocated successfully for %d elements \n",iCount);
    
    printf("Enter the %d Values : \n");
    
    for (iCnt = 0; iCnt<iCount; iCnt++)
    {
        printf("\n Enter the elements no %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
    
    iRet = Addition(ptr,iCount);

    printf("Additon of all elements are: %d\n",iRet);

    free(ptr);

    printf("Dynamic Memory gets deallocated successfully.... \n");

    return 0;
}
