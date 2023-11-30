#include<iostream>
using namespace std;

class demo
{
    public:
        int i,j;

        demo(int a = 10, int b = 20)
        {
            i = a;
            j = b;
        }
};

demo operator + (demo op1, demo op2)
{
    cout<<"Inside operator overloaded function\n";

    return demo(op1.i + op2.i, op1.j + op2.j);
}

int main()
{
    demo obj(0,0);
    demo obj1(11,21);
    demo obj2(5,6);

    obj = obj1 + obj2;

    cout<<obj.i<<"\n";
    cout<<obj.j<<"\n";
    
    return 0;
}
