#include<stdio.h>
#include<stdbool.h>

int CountsDigits(char str[])
{
    int iCnt = 0;

    while (*str !='\0')
    {
      if ((*str>='0') && (*str<='9'))
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

    iRet = CountsDigits(Arr);

    printf("Frequency of digit is : %d\n",iRet);

    return 0;
}

