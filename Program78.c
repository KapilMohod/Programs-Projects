#include<stdio.h> //for Printf and Scanf
#include<stdlib.h> //for malloc and free

//void Display(int* Arr, int iSize)
float Average(int Arr[], int iSize)
{
    int iCnt = 0; 
    int iSum = 0;
    

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
       
           iSum = (iSum + Arr[iCnt]);
        
    }
   return ((float)iSum/(float)iSize);
}

int main()
{
    int iCount = 0;
    int iCnt = 0;
   float fRet = 0.0f;
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
    
    fRet = Average(ptr,iCount);

    printf("Average of elements are: %f\n",fRet);

    free(ptr);

    printf("Dynamic Memory gets deallocated successfully.... \n");

    return 0;
}
