// Added New Element to Last
#include<iostream>
using namespace std;

int main()
{   
    int No = 0;
    cout << "Enter a How many numbers you want to add Elements: ";
    cin >> No;

    int* Arr = new int[No];
    cout << "Enter " << No << " Elements: ";
    for(int i = 0; i < No; i++)
    {
        cin >> Arr[i];
    }
    cout<< "Output Elements Are: \n";
    for(int i = 0; i < No; i++)
    {
        cout<<Arr[i]<<"\n";
    }

    cout<<"Add another Element to add at Last";
    int Last = 0;
    cin>>Last;
    Arr[No] = Last;
    No++;
    cout<<"After Adding Element at Last Output Elements Are: \n";
    for(int i = 0; i < No; i++)
    {
        cout<<Arr[i]<<"\n";
    }    



    return 0;
}