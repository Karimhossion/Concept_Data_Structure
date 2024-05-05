#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter size : ";
    cin>>size;
    int array[size];
    cout<<"Enter element : ";
    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }
    cout<<"Reverse array : ";
    for (int i = size-1; i>= 0; i--)
    {
        cout<<" "<<array[i];
    }
    return 0;
}
    