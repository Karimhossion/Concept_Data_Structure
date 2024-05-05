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
    int value;
    cout<<"Insert value : ";
    cin>>value;
    cout<<"Inserting element : ";
    for (int i = 0; i < size+1; i++)
    {
        cout<<" "<<array[i];
    }
    return 0;
}