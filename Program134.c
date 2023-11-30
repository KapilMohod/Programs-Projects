#include<stdio.h>
#include<stdbool.h>

int CountsCapital(char str[])
{
    int iCnt = 0;

    while (*str !='\0')
    {
      if ((*str>='A') && (*str<='Z'))
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

    iRet = CountSCapital(Arr);

    printf("Frequency of Capital letter is : %d\n",iRet);

    return 0;
}

