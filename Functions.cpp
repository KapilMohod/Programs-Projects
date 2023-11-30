#include<stdio.h>

void Fun_Value(int No)
{
    No++;
}
void Fun_Address(int *Ptr)
{
    (*Ptr)++;
}
void Fun_Reference(int &ref)
{
    ref++;
}

int main(int argc, char const *argv[])
{
    int i = 10, j = 10, k = 10;

    Fun_Value(i);
    Fun_Address(&j);
    Fun_Reference(k);

    printf("Call by Value : i : %d\n",i);
    printf("Call by address : j :  %d\n",j);
    printf("Call by reference : k :  %d\n",k);

    return 0;
}
