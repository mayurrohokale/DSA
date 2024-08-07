

// single level Inheritanc in private

#include <iostream>
using namespace std;

class Parent
{
    private:
       int A;
       int B;
    
    Parent()
    {
        A = 10;
        B= 20;
    }
};

class child : public Parent
{
    public:
        int x;
        int y;
    
    child()
    {
        x = A;
        y= B;
    }
};

int main()
{   
    child obj;
    cout << "Value of x is " << obj.x << endl;
    cout<< "Value of Y is " << obj.y;


    return 0;
}