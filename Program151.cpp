#include<iostream>
using namespace std;

class Array
{
    private:
        int *Arr; //else we write int Arr[]; ....same meaning with different syntax
        int iSize;

    public:
        Array(int X)  // Parameterised Constructer
        {
            iSize = X;
            Arr = new int[iSize];
        }  
        ~Array() // Destructer
        {
            delete []Arr;
        }  

        void Accept() // function for entering the elements
        {
            int iCnt = 0;
            cout<<"Enter the Elements : \n";

            for (iCnt=0; iCnt<iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
            
        }

        void Display() // function for Displaying the elements
        {
            cout<<"Elements of the Array are : \n";
            int iCnt = 0;

            for (iCnt=0; iCnt<iSize; iCnt++)
            {
               cout<<Arr[iCnt]<<"\t";
            }
            cout<<"\n";
        }

        

};


int main()
{
   int iLength = 0;

   cout<<"Enter the number of elements that you want to store : \n";
   cin>>iLength;

    //Array aobj(iLength); ...... Static Allocation
   Array *aobj = new Array(iLength); // dynamic allocation

   aobj->Accept();
   aobj->Display();

   delete aobj;

    return 0;
}