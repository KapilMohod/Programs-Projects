#include<stdio.h>
#include<stdbool.h>

typedef int Bool;
#define True 1
#define False 0

char ChkVowel(char Cvalue)
{

    char Arr[]={'a','e','i','o','u'};

   for (int i = 0; i < 5; i++)
   {
        if (Cvalue==Arr[i] || Cvalue == Arr[i] - 32)
        {
            return True;
        }
        
   }
   return False;

    
}

int main()
{
    char cValue = '\0';
    Bool bRet = False;

    printf("Enter a character: \n");
    scanf(" %c", &cValue); 

    /*
        Input : E
        Output : True

        Input : d
        Output : False

    */
    
    bRet = ChkVowel(cValue);

    if (bRet== True)
    {
       printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }
    

    return 0;
}
