/*
    Input: 5
    Output : 5000

    Input: 12
    Output : 12000

*/

#include<stdio.h>

int KMtoMeter(int ikmValue)
{
    const int kilometer = 1000;
    int ChangeKMtoMeter = 0;

    ChangeKMtoMeter = ikmValue * kilometer;

    return ChangeKMtoMeter;

}

int main()
{
    int iValue1 = 0;
    int iRet = 0;

    printf("Enter the km Value : \n");
    scanf("%d",&iValue1);


    iRet = KMtoMeter(iValue1);
    printf("The Converion of km to meter is : %d\n",iRet);

    return 0;
}
