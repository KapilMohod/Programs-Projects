#include<iostream>
using namespace std;

class String
{
    private:
        char * str;
        int iSize;

    public:
        String()
        {
            iSize = 20;
            str = new char[iSize];
        }  

        String(int X)
        {
            iSize = X;
            str = new char[iSize]; 
        }

        ~String()
        {
            delete []str;
        }  

        void Accept()
        {
            cout<<"Enter the String : ";
            cin.getline(str,iSize);
        }

        void Display()
        {
            cout<<"String is : "<<str;
        }

        int CountCapital()
        {
            int iCnt = 0;
            char *temp = str; // Xerox 

            while (*temp!='\0')
            {
               if ((*temp>='A') && (*temp<='Z'))
               {
                iCnt++;
               }
               temp++;
               
            }
            return iCnt;
        }
};

int main()
{
    String *sobj1 = new String(30);
    int iRet = 0;
    //String *sobj2 = new String();

    sobj1->Accept();
    sobj1->Display();

    iRet = sobj1->CountCapital();

    cout<<"Capital Count is : "<<iRet<<"\n";

    sobj1->Display();

    delete sobj1;

    //delete sobj2;

    return 0;
}