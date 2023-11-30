#include<stdio.h> //for Printf and Scanf
#include<stdlib.h> //for malloc and free

int Frequency(int Arr[], int iSize, int iNo)
{
    int icnt = 0;
    int iFrequency = 0;

    for (icnt = 0; icnt < iSize; icnt++)
    {
        if (Arr[icnt]==iNo)
        {
           iFrequency++;
        }
        
    }
    return iFrequency;

}
int main()
{
    int iCount = 0;
    int iCnt = 0;
    int iValue = 0;
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

    printf("Enter the element you want to search : \n");
    scanf("%d",&iValue);
    
    int iRet = Frequency(ptr,iCount,iValue);
    printf("%d occures %d times : \n",iValue,iRet);

    free(ptr);

    printf("Dynamic Memory gets deallocated successfully.... \n");

    return 0;
}
