/*
    Input : 10
    Output : 700

    Input : 3
    Output : 270

    Input : 1200
    Output : 84000
    
*/

#include<stdio.h>

int DollarToINR(int iNo)
{
    int ConvertDollarToINR = 70;
    int Converter = 0;

    Converter = iNo * ConvertDollarToINR;
    return Converter;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Amount in $ : \n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);
    printf("After Convert, The Given INR is : %d\n",iRet);

    return 0;
}
