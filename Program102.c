#include<stdio.h>
/*
    Input:  1    1   1   1
            1    1   1   1
            1    1   1   1
            1    1   1   1
            
    
    Output:  1    1   1   1
            1    1   1   1
            1    1   1   1
            1    1   1   1
*/

void Display(int iRow, int iCol)
{
    int i= 0;
    int j = 0;


    for ( i =1; i <= iRow; i++)
    {
        for ( j = 1; j <=iCol; j++)
        {
            
            printf("1\t");

        }
        printf("\n");
    }
   
    
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the rows : \n");
    scanf("%d",&iValue1);

     printf("Enter the columns : \n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}
