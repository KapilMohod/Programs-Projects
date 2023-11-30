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

class Hello 
{
    public:
        int a,b;

        Hello()
        {
            cout<<"Inside Hello Constrcuter\n";
            a = 30;
            b = 40;

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

//class Marvellous : public Demo, public Hello
class Marvellous : public Hello, public Demo
{
    public:
        int p;

        Marvellous()
        {
            cout<<"Inside Constructer of Marvellous\n";
            p = 60;
        }
        ~Marvellous()
        {
            cout<<"Inside Destructer of Marvellous\n";
        }
        void sun()
        {
            cout<<"Inside sun of Marvellous\n";
        }

};

int main()
{
    
    Marvellous mobj;

    cout<<sizeof(mobj)<<" Bytes \n";
    
    mobj.Fun();
    mobj.gun();
    mobj.sun();
    

    return 0;
}
