// Runtime Polymorphism
// Pure Virtual 

#include<iostream>
using namespace std;

class Base
{
    public:
        int A;
        int B; 
    virtual int Addition(int i, int j) = 0;

};

class Derived : public Base
{
    public:
        int Addition(int i, int j)
        {
            return i + j;
        }
};

int main()
{
    Base *ptr;
    Derived obj;
    ptr = &obj;

    int Ans = 0;
    Ans = ptr->Addition(5,10);
    cout<<Ans;

    return 0;
}