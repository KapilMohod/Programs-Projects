#include<stdio.h>
#include<stdbool.h>

int strlenX(char str[])
{
    int iCnt = 0;

    while (*str !='\0')
    {
      iCnt++;
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

   iRet = strlenX(Arr);

   printf("Length of String is : %d\n",iRet);

    return 0;
}

