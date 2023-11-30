#include<iostream>
using namespace std;

class base
{
    public:
       int i,j;
       static int k;

       base()
       {
        i = 10;
        j = 20;
       }

       void fun()
       {
        cout<<"Base fun";
       }
};

int base::k = 11;

class derived : public base
{
    public:
        int x,y;

        derived()
        {
            x = 50;
            y = 60;
        }

        void gun()
        {
            cout<<"derived gun";
        }
};
int main()
{
   base bobj;
   derived dobj;

   cout<<sizeof(bobj);
   cout<<sizeof(dobj);

   cout<<bobj.i;
   cout<<bobj.j;
   cout<<dobj.i;
   cout<<dobj.j;
   cout<<bobj.k;
   cout<<dobj.x;

   bobj.fun();
   dobj.fun();
   dobj.gun();

   return 0; 
}