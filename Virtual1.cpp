#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j,k;

        void fun()
        {
            cout<<"Inside Fun \n";
        }

};

class Derived : public Base
{
    public:
        int a,b;

         void gun()
        {
            cout<<"Inside derived gun \n";
        }


};

int main()
{
    Base bobj;
    Derived dobj;
  
    cout<<sizeof(bobj)<<"\n"; //12bytes
    cout<<sizeof(dobj)<<"\n"; //20bytes

    bobj.fun();

    dobj.fun();
    dobj.gun();

    return 0;
}
