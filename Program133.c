#include<stdio.h>
#include<stdbool.h>

int CountSmall(char str[])
{
    int iCnt = 0;

    while (*str !='\0')
    {
      if ((*str>='a') && (*str<='z'))
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

    iRet = CountSmall(Arr);

    printf("Frequency of Small letter is : %d\n",iRet);

    return 0;
}

