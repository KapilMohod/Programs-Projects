#include <stdio.h>
#include <ctype.h>

void strrevX(char *str) 
{
    char *start = str;
    char *end = str;

    while (*end != '\0') 
    {
        end++;
    }
    end--; 

    while (start < end) 
    {
        if (isalpha(*start) && isalpha(*end)) 
        {
            char temp = *start;
            *start = *end;
            *end = temp;
             start++;
             end--;
        } 
        else if (!isalpha(*start)) 
        {
            start++;

        } else if (!isalpha(*end)) 
        {
            end--;
        }
    }
}

int main() {
    char arr[20];

    printf("Enter String: \n");
    scanf("%19s", arr);

    strrevX(arr);

    printf("Reversed String: %s\n", arr);

    return 0;
}
