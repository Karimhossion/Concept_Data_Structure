#include<iostream>
using namespace std;
int main()
{
    int array[16],i;
    cout<<"Enter 15 element : ";
    for (i = 0; i < 15; i++)
    {
        cin>>array[i];
    }
    int value;
    cout<<"Insert Value : ";
    cin>>value;
    array[i]=value;
    cout<<"Inserting 15 element : ";
    for ( i = 0; i <16; i++)
    {
        cout<<" "<<array[i];
    }
    return 0;
}