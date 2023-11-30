#include<stdio.h>
#include<stdbool.h>

#define True 1
#define False 0

typedef int Bool;

Bool ChkZero(int iNo)
{

    while (iNo)
    {
        int digit = iNo % 10;

        if (digit == 0)
        {
            return true;
        }
        iNo /=10;
    }
    return false;
 }

 
    int main()
    {
        int iValue = 0;
        Bool bRet = false;

        printf("Enter number : \n"); 
        scanf("%d",&iValue); 
        /*Input: 2395
          Output: There is no Zero 
          
          Input: 1018
          Output: It contains Zero
          
          Input: 9000
          Output: It contains Zero
          
          Input: 10687
          Output: It contains Zero */

        bRet = ChkZero(iValue);

        if (bRet == true )
        {
            printf("It Contains Zero");
        }
        else
        {
            printf("There is no Zero");
        }
        

        return 0;
    }