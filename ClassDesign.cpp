#include<iostream>
using namespace std;

class Array
{
    private:
        int *Arr;
        int iLength;

    public:
        Array(int Size)
        {
            iLength = Size;
            Arr = new int[iLength];
        }   

        ~ Array()
        {
            delete []Arr;
        }

        void Accept()
        {
            int icnt = 0;
            cout<<"Enter the Elements : "<<"\n";
            for (icnt = 0; icnt < iLength; icnt++)
            {
                cin>>Arr[icnt];
            }
            
        } 

         void Display()
        {
            int icnt = 0;
            cout<<"Elements of the Array are : "<<"\n";
            for (icnt = 0; icnt < iLength; icnt++)
            {
                cout<<Arr[icnt]<<"\t";
            }
            cout<<"\n";
        } 

};

int main()
{
    
    Array aobj(5);
    aobj.Accept();
    aobj.Display();

    return 0;
}
