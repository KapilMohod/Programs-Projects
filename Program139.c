#include<stdio.h>
#include<stdbool.h>

int CountsWhiteSpaces(char str[])
{
    int iCnt = 0;

    while (*str !='\0')
    {
      if (*str==' ')
      {
        iCnt++;
      }
      str++;
    }
    return iCnt++;
}

int main()
{
    char Arr[20];
    char iRet = '\0';

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    iRet =CountsWhiteSpaces(Arr);

    printf("Frequency of WhiteSpaces is : %d\n",iRet);

    return 0;
}

