// Add Element add at Position

#include<iostream>
using namespace std;

int main()
{
    int No = 0;
    int* Arr = new int[No];

    cout<<"Enter the How Many Numbers in Array:";
    cin>> No;

    for(int i = 0; i < No; i++)
    {
        cin>>Arr[i];
    } 

    cout<<"Entered Number of Elements \n";
    for(int i = 0; i < No; i++)
    {
        cout<<Arr[i]<<"\n";
    }

    cout<<"Enter postion in which you ant to add Number";
    int pos = 0;
    cin>>pos;
    
    cout<<"Enter the New Element";
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
        NewArr[i +1] = Arr[i];
    }
    delete[] Arr;

    cout<<"New Arrays are: \n";
    for(int i = 0; i < No; i++)
    {
        cout<<NewArr[i]<<"\n";
    }




    return 0;
}