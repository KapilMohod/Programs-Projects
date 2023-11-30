#include<stdio.h>

typedef int Bool;
#define true 1
#define false 0


int Check(int iNo)
{
    if ((iNo % 5)==0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{

   int iValue = 0;
   Bool bRet = false;

   printf("Enter the number : \n");
   scanf("%d",&iValue);

   bRet = Check(iValue);

   if (bRet == true)
   {
        printf("The number is Divisible by 5");
   }
   else
   {
    printf("The number is not Divisible by 5");
   }
   


    return 0;
}
