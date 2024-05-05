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
    int del;
    cout<<"Enter delete position : ";
    cin>>del;

    for (int i = del-1; i < size-1; i++)
    {
        array[i]=array[i+1];
    }
    cout<<"Delete element : ";
    for (int i = 0; i < size-1; i++)
    {
        cout<<" "<<array[i];
    }
    return 0;
       
}