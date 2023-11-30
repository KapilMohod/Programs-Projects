#include<stdio.h>

int main()
{

    int Arr[5] = {10,20,30,40,50};

    printf("%d\n",Arr[3]);

    printf("The size of Array is : %d\n", sizeof(Arr));

    if (Arr[2]>=40)
    {
        printf("The Arr of 2nd index is greater than 40");
    }
    else
    {
        printf("The Arr of 2nd index is less than 40");
    }
    
    return 0;
}
