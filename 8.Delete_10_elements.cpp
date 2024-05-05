#include<iostream>
using namespace std;
int main()
{
    int array[10];
    cout<<"Enter 10 element : ";
    for (int i = 0; i < 10; i++)
    {
        cin>>array[i];
    }
    int del;
    cout<<"Enter delete position : ";
    cin>>del;
    for (int i = del-1; i <10-1 ; i++)
    {
        array[i]=array[i+1];
    }
    cout<<"Delete  element : ";
    for (int i = 0; i < 10-1; i++)
    {
        cout<<" "<<array[i];
    }
    return 0;
}