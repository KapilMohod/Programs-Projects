#include<stdio.h>

int Addition(int No1, int No2)
{
    int Sum =0;
    Sum = No1 + No2;
    return Sum;

}

int main ()
{

    int Value1 = 10;
    int value2 = 11;
    int Ans = 0;

    Ans = Addition(Value1,value2);

    printf("Addition is :%d\n", Ans);

    return 0;
}