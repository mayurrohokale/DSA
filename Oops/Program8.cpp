//Runtime Polymorphism
//Virtual
#include<iostream>
using namespace std;

class Base 
{
    public:
        int A;
    virtual void fun()
    {
        cout<<"Inside fun";
    }
};

class Derived : public Base{
    public:
        int B;
    void fun()
    {
        cout<<"Inside Gun";
    }
};
int main()
{
    Base *ptr;
    Derived obj;
    ptr = &obj;

    ptr->fun();

    return 0;
}