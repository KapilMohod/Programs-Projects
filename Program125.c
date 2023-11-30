#include<stdio.h>
#include<stdbool.h>


int main()
{
    char Arr[20];

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Entered String is : %s\n",Arr);
    
    return 0;
}