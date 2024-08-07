// Added New Element to First
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
  
    cout<<"Add another Element at First Position";
    int First = 0;
    cin>>First;
    int* NewArr = new int[No + 1];
    
    for(int i = 0; i < No; i++)
    {
        NewArr[i+1] = Arr[i];
    }
    NewArr[0] = First;
    No++;
    
    cout<<"After Adding Element at First Position Output Elements Are: \n";
    for(int i = 0; i < No; i++)
    {
        cout<<NewArr[i];
    }

    return 0;
}