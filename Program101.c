#include<stdio.h>
/*
    Input:  *    *   *   *
            *    *   *   *
            *    *   *   *
            *    *   *   *
            
    Output: *    *   *   *
            *    *   *   *
            *    *   *   *
            *    *   *   *
*/

void Display(int iRow, int iCol)
{
    int i= 0;
    int j = 0;


    for ( i =1; i <= iRow; i++)
    {
        for ( j = 1; j <=iCol; j++)
        {
            
            printf("*\t");

        }
        printf("\n\n");
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
