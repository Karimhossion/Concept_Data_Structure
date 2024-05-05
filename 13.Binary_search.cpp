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

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            if (array[j]>array[j+1])
            {
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    cout<<"Sorted element : ";
    for (int i = 0; i < size; i++)
    {
        cout<<" "<<array[i];
    }
    cout<<endl;
    int search;
    cout<<"Search element : ";
    cin>>search;
    
    int beg=0,end=size-1,mid;
    while (beg<=end)
    {
        mid=(beg+end)/2;
        if (array[mid]==search)
        {
            cout<<"element index : "<<mid;
            return 0;
        }
        else if (array[mid]<search)
        {
            beg=mid+1;
        }
        else
        {
            end=mid-1;
        } 
    }
    cout<<"Invalid"<<endl;
    
}