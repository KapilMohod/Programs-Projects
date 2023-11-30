#include<stdio.h>

void Diplay(int iNo)
{

    if (iNo<10)
    {
       printf("Hello");
    }
    else
    {
        printf("Demo");
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
