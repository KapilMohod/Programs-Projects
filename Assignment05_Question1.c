#include<stdio.h>

int main()
{
    char Name[30];

    printf("Please Enter the Full Name : \n");
    scanf("%s",&Name);
    /*
        Input : Piyush
        Output : Piyush Khairnar
    */

    printf("Your Name is %s Khairnar",Name);

    return 0;
}
