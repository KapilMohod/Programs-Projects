#include<stdio.h>

void Accept(int iNo)
{
    int icnt = 0;

    for ( icnt = 0; icnt <= iNo; icnt++)
    {
        printf("*\n");
    }
    
}

int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);

   return 0;
}
