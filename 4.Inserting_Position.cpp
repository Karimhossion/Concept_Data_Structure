#include<iostream>
using namespace std;

int main() {
    int size;
    cout<<"Enter size : ";
    cin>>size;
    int array[size];
    cout << "Enter elements: ";
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
    
    int value;
    cout << "Insert Value: ";
    cin >> value;
    int position;
    cout<<"Enter position : ";
    cin>>position;

    if (!position>=1 && position<=size+1)
    {
        cout<<"Invalid Position";
        return 1;
    }
    else{
        for (int i = size-1; i < position-1; i--)
        {
            array[i+1]=array[i];
        }
    }
    array[position-1]=value;
    cout<<"Inserting : ";
    for (int i = 0; i < size; i++)
    {
        cout<<" "<<array[i];
    }
    return 0;
    


}
