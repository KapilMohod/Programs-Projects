#include<stdio.h>
typedef int Bool;

#define True 1
#define False 0

Bool ChkEqual(int iNo1, int iNo2)
{
    if (iNo1==iNo2)
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
    int iValue1 = 0;
    int iValue2 = 0;

    Bool bRet = False;

    printf("Please enter the Value 1 : \n");
    scanf("%d",&iValue1);

    printf("Please enter the Value 2 : \n");
    scanf("%d",&iValue2);


    /*
        Input : 10  10
        Output : Equal

        Input : 10  12
        Output : Not Equal

        Input : 10  -10
        Output : Not Equal


    */

    bRet = ChkEqual(iValue1,iValue2);

    if (bRet==True)
    {
        printf("The Number is Equal");
    }
    else
    {
         printf("The Number is Not Equal");
    }
    

    return 0;
}
