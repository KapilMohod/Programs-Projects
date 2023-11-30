#include<stdio.h>

int AreaofCylinder (float R1, const float PI1, float H1)
{
    float sum = 0.0f;
    sum = 2*(PI1*R1*H1);

    return sum;

}
int main()
{
    float Radius = 0.0f;
    const float PI = 3.14f;
    float Height = 0.0f;
    float Ans = 0.0f;

    printf("Enter the Radius : \n");
    scanf("%f",&Radius);

    printf("Enter the Height : \n");
    scanf("%f",&Height);

    Ans = AreaofCylinder(Radius,PI,Height);

    printf("Area of Cylinder : %f \n", Ans);

    return 0;

   



}
