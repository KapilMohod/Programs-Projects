#include<stdio.h>

int Multiplication(int No1, int No2, int No3)
{
    int Sum = 0;

    Sum = No1*No2+No3;

    return Sum;
}

int main();
{
    int Value1 = 9;
    int Value2 = 8;
    int Value3 = 7;
    int Ans = 0;

    Ans = Multiplication(Value1,Value2,Value3);
    printf("Multiplication is :%d\n", Ans);

    return 0;
}