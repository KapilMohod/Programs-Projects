#include<stdio.h>

int main()
{

    char ch = '\0';

    printf("Enter the Character : \n");
    scanf("%c",&ch);

    printf("ASCII value of the character in Decimal is : %d\n",ch);
    printf("ASCII value of the character in Octal is : %o\n",ch);
    printf("ASCII value of the character in HexaDecimal is : %x\n",ch);
    
    return 0;
}