// MultiLevel Inheritance


#include <iostream>
using namespace std;

class GrandParent
{
    public:
        int A;
        int B;

    GrandParent()
    {
        A = 10;
        B = 20;
    }

};  

class parent : public GrandParent
{
    public:
       int x;
       int y;

    parent()
    {
        x = A;
        y = B;
    }

};

class child : public parent
{
    public:
     int C;
     int D;

     child()
     {
        C = A;
        D = B;
     }

};

int main()
{   
    child obj;
    cout << "value of C : "<< obj.C;
    cout<< "Value of D : "<< obj.D;

    return 0;
}