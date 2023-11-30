#include<stdio.h>

void Display(int iNo)
{
    int i= 0;

    for ( i = -iNo; i <= iNo; i++)
    {
        printf("%d\t",i);
    }
    printf("\n");
    
}

int main()
{
    int iValue = 0;

    printf("Enter the Value : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
