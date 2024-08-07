// Array
#include<iostream>
using namespace std;

int main()
{

    int No =0;
    cout<<"enter the Number of Element you want add";
    cin>>No;
    int* Arr = new int[No];
    
    cout<<"Enter the elements";
    for(int i =0; i < No; i++)
    {
        cin>>Arr[i];
    }
    
    for(int i = 0; i < No; i++)
    {
        cout<<Arr[i];
    }

    return 0;
}