#include<stdio.h>

 void Display(int iNo)
    {
        int iDigit = 0;

        if (iDigit)
        {
            iNo = -iNo;
        }
        
        
        while(iNo > 0)
        {
            iDigit = iNo % 10;
            printf("Digit is : %d\n",iDigit);
            iNo = iNo / 10;
            printf("Number is : %d\n",iNo);
        }
    }
    int main()
    {
        int iValue = 0;

        printf("Enter number : \n"); 
        scanf("%d",&iValue);

        /*
            Input: 2395
            output: 5
                    9
                    3
                    2

            Input: 1018
            output: 8
                    1
                    0
                    1

            Input: -1018
            output: 8
                    1
                    0
                    1

            Input: 9000
            output: 0
                    0
                    0
                    9                                    
        */

        Display(iValue);

        return 0;
    }