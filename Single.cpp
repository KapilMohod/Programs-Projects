#include<iostream>
using namespace std;

class Demo
{
    public:
        int x,y;

        Demo ()
        {
            cout<<"Inside Demo Constructer\n";
            x = 10;
            y = 20;
        }
        ~Demo ()
        {
            cout<<"Inside Demo Destructer\n";
        }

        void Fun()
        {
            cout<<"Inside fun of Demo\n";
        }

};

class Hello : public Demo
{
    public:
        int a,b,c;

        Hello()
        {
            cout<<"Inside Hello Constrcuter\n";
            a = 30;
            b = 40;
            c = 50;

        }
        ~Hello()
        {
            cout<<"Inside Hello Destructer\n";

        }
        void gun()
        {
            cout<<"Inside gun of Hello\n";
        }
};

int main()
{
    Hello hobj;

    cout<<sizeof(hobj)<<" Bytes \n";
    cout<<hobj.x<<"\n";
    cout<<hobj.y<<"\n";
    cout<<hobj.a<<"\n";
    cout<<hobj.b<<"\n";
    cout<<hobj.c<<"\n";

    hobj.Fun();
    hobj.gun();




    return 0;
}

