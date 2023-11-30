#include<iostream>
using namespace std;

class Pattern
{
    private:
        int iRow = 0;
        int iCol = 0;

    public:

        Pattern(int X, int Y)
        {
            iRow = X;
            iCol = Y;
        }  

        void Display()
        {
            int i = 0, j = 0;

            for (i = 1; i<=iRow; i++)
            {
               for (j = 1; j<=iCol; j++)
                {
                    
                    if ((i==j))
                    {
                       cout<<"$\t";
                    }
                    else if ((j==1) || (i==1)|| (i==iRow) || (j==iCol))
                    {
                        cout<<"*\t";
                    }
                    else if ((i>j))
                    {
                        cout<<"0\t";
                    }
                    else if ((i<j))
                    {
                        cout<<"1\t";
                    }
                       
                } 
               cout<<"\n";
            }
             
            
        }  

};

int main()
{
    
    int iValue1 = 0;
    int iValue2 = 0;

    cout<<"Enter number of Rows : \n";
    cin>>iValue1;

    cout<<"Enter number of Columns : \n";
    cin>>iValue2;

    Pattern *pobj = new Pattern(iValue1, iValue2);

    pobj->Display();

    delete pobj;

    return 0;
}