#include<stdio.h>
#include<stdlib.h>

/*
    Input : 6
        Elements : 85   66  3   80  93  88 
    Output : 85 80
 
   */

void Display(int Arr[], int iSize)
{
    int iCnt = 0;
    int iDiv = 0;
    

    for (iCnt = 0; iCnt<iSize; iCnt++)
    {
        if ((Arr[iCnt]%5)==0)
        {
            iDiv=Arr[iCnt];
        }
        
    }

    printf("The Element which is divisible by 5 : %d\n",iDiv);

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
