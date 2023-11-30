#include<stdio.h>
#include<stdbool.h>

void ReplaceWord(char str[])
{
    int iCnt = 0;

    while (*str !='\0')
    {
      if (*str=='a')
      {
        *str = '_'; // for replacement
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

    ReplaceWord(Arr);

    printf("Updated string, After Replacement of a to _ is : %d\n");

    return 0;
}

