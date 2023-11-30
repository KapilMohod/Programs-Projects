/*
    Input: 5.3  9.78
    Output : 51.834
*/

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    float Area = 0.0f;

    Area = (fWidth * fHeight);

    return Area;

}

int main()
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f;
    float dRet = 0.0f;

    printf("Enter the Width : \n");
    scanf("%f",&fValue1);

    printf("Enter the Height : \n");
    scanf("%f",&fValue2);


    dRet = RectArea(fValue1,fValue2);
    printf("The Area of Rectangle is : %f\n",dRet);

    return 0;
}
