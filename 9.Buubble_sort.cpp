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
    cout<<"Bubbole sort : ";
    for (int i = 0; i < size; i++)
    {
        cout<<" "<<array[i];
    }
    return 0;
    
}