#include<stdio.h>

void DisplayConvert(char CValue)

{
    if (CValue >= 'a' && CValue <= 'z')
    {
        // Convert lowercase to uppercase
        CValue = CValue - 32;
    }
    else if (CValue >= 'A' && CValue <= 'Z')
    {
        // Convert uppercase to lowercase
        CValue = CValue + 32;
    }

    printf("Converted character: %c\n", CValue);
}

int main()
{
    char cValue = '\0';

    printf("Enter a character: \n");
    scanf(" %c", &cValue); 

    /*
        Input : a   Output : A
        Input : D   Output : d
    */
    DisplayConvert(cValue);

    return 0;
}
