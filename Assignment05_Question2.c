#include<stdio.h>
typedef int Bool;

#define True 1
#define False 0

Bool ChkGreater(int iNo)
{
    if (iNo>100)
    {
        return True;
    }
    else
    {
        return False;
    }
    
}



int main()
{
    int iValue = 0;

    Bool bRet = False;

    printf("Please enter the Number : \n");
    scanf("%d",&iValue);

    /*
        Input : 101
        Output : Greater

        Input : 39
        Output : Smaller
    */

    bRet = ChkGreater(iValue);

    if (bRet==True)
    {
        printf("The Number is greater");
    }
    else
    {
         printf("The Number is Smaller");
    }
    

    return 0;
}
