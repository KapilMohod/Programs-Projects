#include<iostream>
using namespace std;

class Digits
{
    private:
        int iNo;

    public:
        Digits(int x)
        {
            iNo = x;
        }

    //Logic .... he faqt template ahe , je apan used karnar        


};


int main()
{
   int iValue = 0;
   int iRet = 0;

   cout<<"Enter the Digits : \n";
   cin>>iValue;

   Digits nobj(iValue);




    
    return 0;
}