#include<stdio.h>

int condition(int No1, int No2)
{
    int sum = 0;
    sum = No1>No2;
    return sum;

}

int main(int argc, char const *argv[])
{
    int a = 0;
    int b = 0;
    int Ans = 0;

    printf("Enter the value of a : \n");
    scanf("%d",&a);

    printf("Enter the value of b : \n");
    scanf("%d",&b);

    if (Ans=condition(a,b))
    {
        printf("The value of a is greater than the value of b");
    }
    else
    {
        printf("The value of b is greater than the value of a");
    }


    return 0;
}

