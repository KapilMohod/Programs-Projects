#include<stdio.h>
#include<stdlib.h>

int main()
{

    int isize = 0;
    int *ptr = NULL;

    printf("Enter the size of array : \n");
    scanf("%d",&isize);

    ptr = (int *)calloc(isize , sizeof(int));

    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;

    free(ptr); 

    return 0;  
}
