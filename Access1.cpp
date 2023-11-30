#include<iostream>
using namespace std;

class Demo
{
    int i;

    public:
        int j;

    private:
        int k;

    protected:
        int a;
    
    public:
        Demo ()
        {
            i = 10;
            j = 20;
            k = 30;
            a = 40;
        } 

        void Display()
        {
            cout<< "The value of i : "<<i<<"\n"; //Allowed
            cout<< "The value of j : "<<j<<"\n";
            cout<< "The value of k : "<<k<<"\n";
            cout<< "The value of k : "<<a<<"\n";
        }   


};
class Hello : public Demo
{
    public:
        void HelloDisplay()
        {
            //cout<< "The value of i : "<<i<<"\n"; //NA
            cout<< "The value of j : "<<j<<"\n"; 
            //cout<< "The value of k : "<<k<<"\n"; //NA
            cout<< "The value of k : "<<a<<"\n";
        }

};

int main()
{
    Hello hobj;

    hobj.Display();



    return 0;
}
