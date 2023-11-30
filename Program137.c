#include<stdio.h>
#include<stdbool.h>

int CountsVowels(char str[])
{
    int iCnt = 0;

    while (*str !='\0')
    {
      if ((*str=='A') || (*str=='E') || (*str=='I') || (*str=='O') || (*str=='U') )
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

    iRet = CountsVowels(Arr);

    printf("Frequency of vowels is : %d\n",iRet);

    return 0;
}

