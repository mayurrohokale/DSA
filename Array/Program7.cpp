//remove dublicates from array

#include<iostream>
using namespace std;

int main()
{
    int No = 0;
    int* Arr = new int[No];

    cout<<"Enter How many number of elements in Array";
    cin>>No;

    for(int i =0; i< No; i++)
    {
        cin>>Arr[i];
    }

    cout<<"Entered Elements:";
    for(int i = 0; i< No; i++)
    {
        cout<<Arr[i];
    }

    int newSize = No;

    for(int i = 0; i < newSize; i++)
    {
        for(int j = i+1; j < newSize; j++)
        {
            if(Arr[i] == Arr[j])
            {
                for(int k = j; k < newSize; k++)
                {
                    Arr[k] = Arr[k+1];
                }
            }
        }
    }

    cout<<"new Array";
    for(int i = 0; i< newSize; i++)



    return 0;
}