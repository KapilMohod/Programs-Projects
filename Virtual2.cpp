#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j,k;

        void fun()
        {
            cout<<"Inside Base Fun \n";
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
   Base *bp1 = new Base; //Not Casting
   Derived *dp1 = new Derived; //Not Casting
   Base *bp2 = new Derived; //Up Casting
   //Derived *dp2 = new Base; //Down Casting

    return 0;
}
