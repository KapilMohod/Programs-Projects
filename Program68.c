#include<stdio.h> //for Printf and Scanf
#include<stdlib.h> //for malloc and free

void Display(int Arr[], int iSize)
{
    int iCnt = 0;

    printf("Your Entered elements are : \n");
    
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\t",Arr[iCnt]);
    }
    printf("\n");
}

int main()
{
    int iCount = 0;
    int* ptr = NULL;
    int iCnt = 0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iCount);
    
    ptr = (int*) malloc(iCount*sizeof(int));

    printf("Enter the Elements : \n");

    for (iCnt = 0; iCnt < iCount; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr,iCount);
    
    return 0;
}
