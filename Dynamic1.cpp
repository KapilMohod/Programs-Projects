#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int arr[5]; // static memory allocation

    int *ptr = (int *)malloc(5*sizeof(int)); // Dynamic memory allocation in c

    int *ptr2 = new int [5]; // Dynamic memory allocation inc++

    free(ptr);

    delete []ptr2;

    return 0;
}
