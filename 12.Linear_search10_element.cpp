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

    int search;
    cout<<"Search element : ";
    cin>>search;
    int count=0;
    for (int i = 0; i < 10; i++)
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