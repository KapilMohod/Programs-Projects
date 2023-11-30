#include<stdio.h>

// Pre Increment Program

int main ()
{
    int i = 10;
    int No = 10;

    No = ++i;

    printf("%d\n",No); // 11
    printf("%d\n",i); // 11

    return 0;
}