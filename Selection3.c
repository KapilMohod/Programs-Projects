#include<stdio.h>

int main()
{
    int Standard = 0;

    printf("Primary school portal..\n");

    printf("Enter your division : \n");
    scanf("%d", &Standard);
    
    switch (Standard)
    {
    case 1:
        printf("Your exam is at 1 pm\n");
        break;
     case 2:
        printf("Your exam is at 2 pm\n");
        break;
    case 3:
        printf("Your exam is at 3 pm\n");
        break;
    case 4:
        printf("Your exam is at 4 pm\n");
        break;
    
    default:
        printf("Invalid Standard...\n");
        break;
    }
    return 0;
}