#include<stdio.h>

void Diplay(int iNo)
{

    while (iNo>0)
    {
        printf("*\t");
        iNo--;
    }
    
    
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    Diplay(iValue);

    return 0;
}
