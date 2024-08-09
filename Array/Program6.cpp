//check even odd

#include<iostream>
using namespace std;

int Even(int num)
{
    if(num %2 == 0)
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int No = 0;
    bool ans = false;
    cout<<"eneter number that you want to check";
    cin>>No;

    ans = Even(No);
    if(ans == true)
    {
        cout<<No<<"is a Even Number";
    }
    else{
        cout<<No<<"is a Odd Number";
    }



    return 0;
}