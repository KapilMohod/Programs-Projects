#include<stdio.h>

// Post Decrement Program

int main ()
{
    int i = 10;
    int No = 10;

    No = i--;

    printf("%d\n",No); //10
    printf("%d\n",i); // 9

    return 0;
}