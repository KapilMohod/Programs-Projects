#include<stdio.h>

int main()
{
    int a = 0;
    int Ans = 0;

    printf("Enter the number : \n");
    scanf("%d", &a);

    Ans = a * 2;

    if (Ans > 10)
    {
        printf("The number is greater than 10...\n");
    }
    else
    {
        printf("The number is less than 10...\n");
    }
    return 0;
}