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

    //Logic .... he faqt template ahe , je apan used karnar        


};


int main()
{
   int iValue = 0;
   int iRet = 0;

   cout<<"Enter the Number : \n";
   cin>>iValue;

   Number nobj(iValue);




    
    return 0;
}