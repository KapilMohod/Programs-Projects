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
            //Logic
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

    Pattern pobj(iValue1, iValue2);

    pobj.Display();

    return 0;
}