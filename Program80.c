#include<stdio.h> //for Printf and Scanf
#include<stdlib.h> //for malloc and free

int Maximum(int Arr[], int iSize)
{
    int icnt = 0;
    int iMax = Arr[0];

    for (icnt = 0; icnt < iSize; icnt++)
    {
        if (Arr[icnt]>iMax)
        {
            iMax = Arr[icnt];
        }
        
    }
    return iMax;
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
    
    iRet = Maximum(ptr,iCount);

    printf("Maximum elements is: %d\n",iRet);

    free(ptr);

    printf("Dynamic Memory gets deallocated successfully.... \n");

    return 0;
}
