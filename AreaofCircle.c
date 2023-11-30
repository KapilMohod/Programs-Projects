#include<stdio.h>

int AreaofC (float R1, const float PI1)
{

    float Sum = 0.0f;

    Sum = PI1 * R1 * R1;
    
    return Sum;

}

int main()
{
        float Radius = 0.0f;
        const float PI = 3.14f;
        float Area = 0.0f;

        printf("Enter the Radius of circle : \n");
        scanf("%f",&Radius);

        Area = AreaofC(Radius, PI);

        printf("Area of Circle is : %f\n", Area);

         if (Area <=20)
        {
           printf("The Area of Circle is correct");
        }
        else
        {
            printf("The Area of Circle is incorrect");
        }

    return 0;
}
