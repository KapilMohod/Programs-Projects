#include<stdio.h>

float Percentage(int iNo1, int iNo2)
{
    float fSum = 0.0f;
    if (iNo1!=0)
    {
      fSum = ((float)iNo2 / iNo1) * 100 ;
    }
     
    return fSum; 
}



int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks : \n");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks : \n");
    scanf("%d",&iValue2);

    /*
        Input : 1000    745
        Output : 74.5%

    */

    fRet = Percentage(iValue1,iValue2);

    if (fRet == 0.0)
    {
       printf("Invalid Input : Division by Zero\n");
    }
    else
    {
        printf("The Percentage of given numbers is : %f\n",fRet);

    }
    
    

    return 0;
}
