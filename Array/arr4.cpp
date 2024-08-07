#include <iostream>

using namespace std;

class Parent
{
    public:
        int No1;
        int No2;
    Parent()
    {
        cout<<"inside Default constructor";
        No1=10;
        No2=20;
    };
}

int main()
{
    cout<< "Inside Main \n";
    Parent obj;
    cout<<obj.No1;
    



    return 0;
}