// Multiple Inheritance

#include<iostream>
using namespace std;

class Parent
{   
    public: 
        int A;
        int B;
    Parent()
    {
        A = 10;
        B = 20;
    }

};

class Uncle
{
    public:
     int    X  ;
     int    Y  ;

    Uncle()
    {
        X = 30;
        Y= 40;
    }
};


class child : public Parent, Uncle
{
    public:
        int C;
        int D;
    
    child()
    {
        C = A;
        D = X;
    }
};

int main()
{
    child obj;
    cout<< "value of C: "<<obj.C;
    cout << "Value of D: "<<obj.D;

    return 0;
}