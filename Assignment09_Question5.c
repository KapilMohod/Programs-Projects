/*
    Input: 5
    Output : 0.464515

    Input: 7
    Output : 0.650321
*/

#include<stdio.h>

double SquareMeter(double iSqFeet)
{
    const double SquareFeet = 0.0929;
    double Conversion = 0.0;

    Conversion = (iSqFeet * SquareFeet);

    return Conversion;

}

int main()
{
    double dValue1 = 0.0;
    double dRet = 0.0;

    printf("Enter the value of Square Feet : \n");
    scanf("%lf",&dValue1);


    dRet = SquareMeter(dValue1);
    printf("The Converion of Sqaure Feet into Square Meter is : %lf\n",dRet);

    return 0;
}
