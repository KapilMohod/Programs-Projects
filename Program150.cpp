#include<iostream>
using namespace std;

class Number
{
    private:
        int iNo;

    public:
        Number(int x)
        {
            iNo = x;
        }

    int Factorial()
    {
        int iCnt = 0;
        int iFact = 1;

        for (iCnt = 1; iCnt <=iNo; iCnt++)
        {
            iFact = iFact * iCnt;
        }
        return iFact;
    }        


};


int main()
{
   int iValue = 0;
   int iRet = 0;

   cout<<"Enter the Number : \n";
   cin>>iValue;

   Number *nobj = new Number(iValue);

   iRet = nobj->Factorial();  //replace  . with -> because we create dynamic memory allocation & its a pointer thats why we used arrow (->)

   cout<<"Factorial is : "<<iRet;

    return 0;
}