#include<iostream>
using namespace std;

int main()
{
    int No = 0;
    int* Arr = new int[No];

    cout<<"Enter how many number of elements you want to store";
    cin>>No;

    for(int i = 0; i < No; i++)
    {
        cin>>Arr[i];
    }

    cout<<"Entered Elements Are";
    for(int i = 0; i < No; i++)
    {
        cout<<Arr[i];
    }

    cout<<"Enter Pos:";
    int pos = 0;
    cin>>pos;

    cout<<"Enter Element that you want add: ";
    int num = 0;
    cin>>num;

    int* NewArr = new int[No+1];

    for(int i = 0; i < pos; i++)
    {
        NewArr[i] = Arr[i];
    }
    
    NewArr[pos] = num;

    for(int i = pos; i < No; i++)
    {
        NewArr[i+1] = Arr[i];
    }

    No++;

    cout<<"Array After Modification";
    for(int i = 0; i < No; i++)
    {
        cout<<NewArr[i];
    }

    return 0;
}