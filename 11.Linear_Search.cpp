#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter size : ";
    cin>>size;
    int array[size];
    cout<<"Enter element : ";
    for (int i = 0; i < size ; i++)
    {
        cin>>array[i];
    }
    
    int search;
    cout<<"Search value : ";
    cin>>search;

    int count=0;
    for (int i = 0; i < size ; i++)
    {
        if (array[i]==search)
        {
            cout<<"element position : "<<i+1;
            count+=1;
        }
        
    }
    if (count==0)
    {
        cout<<"element is not position"<<endl;
    }
    return 0;
}