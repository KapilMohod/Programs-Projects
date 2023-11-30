/*
    Input: 10
    Output : -12.2222

    Input: 34
    Output : 1.11111
*/

#include<stdio.h>

double FhtoCs(double fTemp)
{
    double celsius = 0.0;

    celsius = ((fTemp - 32) * 5.0/9.0);

    return celsius;

}

int main()
{
    double dValue1 = 0.0;
    double dRet = 0.0;

    printf("Enter the Temperature in Fahrenheit : \n");
    scanf("%lf",&dValue1);


    dRet = FhtoCs(dValue1);
    printf("The Converion of Fahrenheit to Celsius is : %lf\n",dRet);

    return 0;
}
