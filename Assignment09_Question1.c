/*
    Input: 5.3 
    Output : 88.2026

    Input: 10.4 
    Output : 339.6224
*/

#include<stdio.h>

double CircleArea(float fRadius)
{
    const float PI = 3.14;
    float Area = 0.0f;

    Area = (PI * fRadius * fRadius);

    return Area;

}

int main()
{
    float fValue = 0.0f;
    float dRet = 0.0f;

    printf("Enter the Radius : \n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);
    printf("The Area of Circle is : %f\n",dRet);

    return 0;
}
