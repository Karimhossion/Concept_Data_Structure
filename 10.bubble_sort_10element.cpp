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
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j <10-i-1 ; j++)
        {
            if (array[j]>array[j+1])
            {
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
            
        }
    }
    cout<<"Bubble sort : ";
    for (int i = 0; i < 10; i++)
    {
        cout<<" "<<array[i];
    }
    return 0;
    
}