#include<stdio.h>
#include<stdlib.h>

/*
    Input : 6
        Elements : 85   66  3   55  93  88 
    Output : 66 55  88
 
   */

void Display(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;

    for (iCnt = 0; iCnt<iSize; iCnt++)

    {
        
        if ((Arr[iCnt] % 11) == 0)
        {
            printf("Element which is a Multiple of 11: %d\n", Arr[iCnt]);
            iSum += Arr[iCnt]; // Add the multiple of 11 to the sum
        }
    }

        if (iSum > 0) // Check if any multiples of 11 were found
        {
            printf("The sum of elements that are multiples of 11: %d\n", iSum);
        }
        else
        {
            printf("No elements are multiples of 11.\n");
        }
            
    }


int main()
{
    
    int iCount = 0;
    int *ptr = NULL;
    int iCnt = 0;
   

    printf("Enter the No. of Elements : \n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));

    for (iCnt= 0; iCnt < iCount; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr,iCount);

    free(ptr);

    return 0;
}
