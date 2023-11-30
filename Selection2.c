#include<stdio.h>

int main()
{
    int Standard = 0;

    printf("Primary school portal..\n");

    printf("Enter your division : \n");
    scanf("%d", &Standard);
   
    if (Standard == 1)
    {
       printf("Your exam is at 1 pm \n");
    }
    else if (Standard == 2)
    {
        printf("Your exam is at 2 pm \n");
    }
     else if (Standard == 3)
    {
        printf("Your exam is at 3 pm \n");
    }
     else if (Standard == 4)
    {
        printf("Your exam is at 4 pm \n");
    }
    else
    {
        printf("Invalid Standard...\n");
    }
    

    return 0;
}