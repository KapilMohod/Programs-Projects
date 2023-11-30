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
            cout<< "The value of j : "<<k<<"\n";
            cout<< "The value of k : "<<a<<"\n";
        }   


};

int main()
{
    Demo obj;

            //cout<< "The value of i : "<<obj.i<<"\n";
            cout<< "The value of j : "<<obj.j<<"\n";
            //cout<< "The value of j : "<<obj.k<<"\n";
            //cout<< "The value of k : "<<obj.a<<"\n";

            obj.Display(); //Display(&obj)



    return 0;
}
