#include<iostream>
using namespace std;

class Hello
{
    public:
        void fun ();
        void gun();
};

class demo
{
    public : int i;

    private : int j;

    protected : int k;

    public:

        demo()
        {
            i = 10, j = 20; k = 30;
        }

        friend class Hello;

};

void Hello ::fun ()
{
    demo obj;
    cout<<"the value of i : "<<obj.i<<"\n";
    cout<<"the value of j : "<<obj.j<<"\n";
    cout<<"the value of k : "<<obj.k<<"\n";

}

void Hello ::gun ()
{
    demo obj;
    cout<<"the value of i : "<<obj.i<<"\n";
    cout<<"the value of j : "<<obj.j<<"\n";
    cout<<"the value of k : "<<obj.k<<"\n";

}

    
int main()
{
    Hello hobj;

    hobj.fun();
    hobj.gun();

    return 0;
}
