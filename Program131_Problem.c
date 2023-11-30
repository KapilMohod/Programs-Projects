#include<stdio.h>
#include<stdbool.h>

int CountFreq(char str[],char cFreq)
{
    int iCnt = 0;

    while (*str !='\0')
    {
      if (*str==cFreq)
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
    char cValue = '\0';
    char iRet = '\0';

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the Character for frequency Calculation : \n");
    scanf("%c",&cValue);

    iRet = CountFreq(Arr,cValue);

    printf("Frequency of given letter is : %d\n",iRet);

    return 0;
}

