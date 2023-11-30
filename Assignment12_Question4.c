#include<stdio.h>

int Multdigits(int iNo)
{
    int iMulti = 1;
    

    while(iNo != 0)
    {
        
        iMulti = iMulti * (iNo % 10);
        iNo = iNo / 10;
    }
    
    return iMulti;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);
 
    /*
    Input: 2395
    Output: 270

    Input: 1018
    Output: 8

    Input: 9440
    Output: 144

    Input: 922432
    Output: 864

    */

    iRet = Multdigits(iValue);

    printf("Multiplication of digit are : %d\n",iRet);

    return 0;
}