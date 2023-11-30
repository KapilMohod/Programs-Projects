#include<iostream>
using namespace std;

class Demo
{
    public:

    int i,j;
    
    Demo(int a = 0, int b = 0)
    {
        i = a;
        j = b;

    }

    void display()
    {
        cout<<"The value of i : \n";
        std::cin >> i;        
        cout<<"The value of j : \n";
        std::cin >> j;

    if (i>j)
    {
        cout<<"The value of i is greater than the value of j";
    }
    else
    {
        cout<<"The value of j is greater than the value of i";
    }


    }
    
};

int main()
{
    Demo obj;

    obj.display();

    return 0;
}
