#include<stdio.h>

int condition (int No1, int No2)
{
    int Sum = 0;
    Sum = No1 + No2;
    return Sum;

}

int main()
{
    int a = 0;
    int b = 0;
    int Ans = 0;

    printf("Enter the value : \n");
    scanf("%d", &a);

    printf("Enter the value : \n");
    scanf("%d",&b);


    Ans = condition(a,b);
    
   if (Ans == 25)
   {
    printf("The addition is correct..\n");
   }
   else
   {
    printf("The addition is incorrect..\n");
   }

    return 0;
}
