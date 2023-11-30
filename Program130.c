#include<stdio.h>
#include<stdbool.h>

int CountA(char str[])
{
    int iCnt = 0;

    while (*str !='\0')
    {
      if (*str=='a')
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

    iRet = CountA(Arr);

    printf("Count of a letter is : %d\n",iRet);

    return 0;
}

