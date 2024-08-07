//class in OOPS 

#include <iostream>
using namespace std;

class Arithmetic
{
    public:
    int num1, num2;

    Arithmetic()
    {
        num1 = 0;
        num2 = 0;
    }
    Arithmetic(int A, int B)
    {
        num1 = A;
        num2 = B;
    }

    int Addition()
    {
        return num1 + num2;
    }

};

int main()
{
    Arithmetic obj1(10,20);

    cout << "Addition of 10 and 20 is: " << obj1.Addition();

    return 0;
}