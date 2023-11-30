#include<stdio.h>

int main()
{

    int iCnt = 0;

    printf("_______________________________________ \n");
    printf("______________ASCII TABLE_______________\n");
    printf("_______________________________________ \n");

    for (iCnt = 0; iCnt <=127; iCnt++)
    {
        printf("%c\t%d\t%o\t%x\n",iCnt,iCnt,iCnt,iCnt);
    }

    printf("_______________________________________ \n");
    
    
    return 0;
}