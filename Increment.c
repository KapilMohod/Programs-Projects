#include<stdio.h>

// Post Increment Program

int main ()
{
    int i = 10;
    int No = 10;

    No = i++;

    printf("%d\n",No);
    printf("%d\n",i);

    return 0;
}