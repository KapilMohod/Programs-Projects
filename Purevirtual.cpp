#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j,k;

        void fun() //concrete method
        {
            cout<<"Base Fun\n";
        }
        virtual void gun() //concrete method
        {
            cout<<"Base gun\n";
        }
        virtual int Addition (int No1, int No2) = 0; //Abstract method
};

class Derived : public Base
{
    public:
        int a,b;

        void gun() //concrete method
        {
            cout<<"Derived gun\n";
        }
        virtual void sun() //concrete method
        {
            cout<<"Derived sun\n";
        }
        int Addition (int No1, int No2) //concrete method
        {
            return No1 + No2;
        }

};

int main()
{
    //Base bobj;

    Base* bp = new Derived;
    bp->fun();
    bp->gun();
    int Ret = 0;
    Ret = bp->Addition(10,11);

    cout<<"Addition is : "<<Ret<<"\n";
    return 0;
}
