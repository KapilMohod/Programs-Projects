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

        int AdditionEven() //Actual Logic
        {
            int iSum = 0;
            int iCnt = 0;

            for (iCnt = 0; iCnt < iSize; iCnt++)
            {
                if ((Arr[iCnt]%2)==0)
                {
                    iSum = iSum + Arr[iCnt];
                }
            }
            
            return iSum;
            
        }
        

};


int main()
{
   int iLength = 0;
   int iRet = 0;

   cout<<"Enter the number of elements that you want to store : \n";
   cin>>iLength;

    //Array aobj(iLength); ...... Static Allocation
   Array *aobj = new Array(iLength); // dynamic allocation

   aobj->Accept();
   aobj->Display();
   iRet = aobj->AdditionEven();

   cout<<"Addition Of Even Number is : "<<iRet;

   delete aobj;

    return 0;
}