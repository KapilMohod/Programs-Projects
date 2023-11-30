#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;

        const int j;
        const int k;

        //const int j = 10; ..... its a bad way of programming to intializing the parameter in const.
        //const int k = 20; ..... its a bad way of programming to intializing the parameter in const.

        Demo(int a, int b, int c) : j(b), k(c) //........ [j(b),k(c) __> ]
        {
            i = a;
            
        }

};

int main()
{
    Demo obj(11,21,51);
    cout<<"Value of i : "<<obj.i<<"\n";
    cout<<"Value of j : "<<obj.j<<"\n";
    cout<<"Value of k : "<<obj.k<<"\n";

    obj.i++;
    // obj.j++; // NA
    // obj.k++; //NA

    return 0;
}

