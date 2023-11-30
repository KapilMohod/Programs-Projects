#include<stdio.h>

int main()
{
    int Arr [4] = {11,21,51,101};

    printf("Base address of array : %d\n", Arr);

    printf("First element is : %d\n", &Arr[0]);

    printf("Address of second element is : %d\n", &(Arr[1]));

    printf("Size of whole array is : %d\n", sizeof(Arr));

    printf("Size of second element of array is : %d\n", sizeof(Arr[1]));


    return 0;
}
