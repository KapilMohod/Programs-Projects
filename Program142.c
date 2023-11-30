#include<stdio.h>
#include<stdbool.h>

void ReplaceVowels(char str[])
{
    int iCnt = 0;

    while (*str !='\0')
    {
      if ((*str=='a') || (*str=='e') || (*str=='i') || (*str=='o') || (*str=='u') || (*str=='A') || (*str=='E') || (*str=='I') || (*str=='O') || (*str=='U'))
      {
        *str = '_'; 
      }
      str++;
    }
}

int main()
{
    char Arr[20];
    //char iRet = '\0';

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    ReplaceVowels(Arr);

    printf("Updated string, After Replacement of vowels to _ is : %s\n");

    return 0;
}

