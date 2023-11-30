#include<stdio.h>

int AreaofCuboiid (int h1, int l1, int w1)
{
    int sum = 0;
    sum = 2*h1*(l1+w1);
    return sum;

}

int main()
{
    int height = 0;
    int length = 0;
    int width = 0;
    int Ans = 0;

    printf("Enter the Height : \n");
    scanf("%d", &height);

    printf("Enter the Length : \n");
    scanf("%d", &length);

    printf("Enter the Width : \n");
    scanf("%d", &width);

    Ans = AreaofCuboiid(height,length,width);

    printf("Area of Cuboid :%d \n", Ans);

    return 0;
}
