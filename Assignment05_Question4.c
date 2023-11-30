#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iSum = 0;
    iSum = iNo1 * iNo2 * iNo3;
    return iSum;
    
}



int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iAns = 0;

    printf("Please enter the Value 1 : \n");
    scanf("%d",&iValue1);

    printf("Please enter the Value 2 : \n");
    scanf("%d",&iValue2);

    printf("Please enter the Value 3 : \n");
    scanf("%d",&iValue3);


    /*
        Input : 5   4   7
        Output : 140

        Input : 5   0   7
        Output : 35

        Input : 5   0   0   
        Output :5

        Input : 0   0   0 
        Output :0


    */

    iAns = Multiply(iValue1,iValue2,iValue3);
    printf("The Multiplication of given numbers is : %d\n",iAns);


    return 0;
}
