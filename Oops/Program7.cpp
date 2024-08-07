#include<iostream>
using namespace std;

class Demo
{
    public:
        int A;

    Demo()
    {
        A = 10;
    }
    int Addition(int x)
    {
        return x;
    }
};

int main()
{
    Demo obj;
    cout << obj.Addition(20) << endl;

    return 0;

}