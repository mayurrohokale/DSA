#include<iostream>
using namespace std;
int main()
{   
    int Arr[5] = {1,2,3,4,5};
    int *ptr = Arr;
    cout << "Value of Arr[0] = "<<*ptr<<endl;
    return 0;
}