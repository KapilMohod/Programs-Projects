#include<iostream>
#include<stdlib.h>
using namespace std;

class Demo
{
    public:
        int i, j, k;

        Demo()
        {
            cout<<"Inside the constructer\n";
        }

        ~Demo()
        {
            cout<<"Inside the destructer\n";
        }

        void display()
        {
            cout <<"Inside Display\n";
        }
};

int main()
{
    Demo obj1;
    obj1.display();

    Demo *ptr = new Demo;
    ptr->display();
    delete ptr;

    
    return 0;
}
