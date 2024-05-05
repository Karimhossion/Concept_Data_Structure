#include<iostream>
using namespace std;

int main() {
    int array[10], i;
    cout << "Enter 10 elements: ";
    for (i = 0; i < 10; i++) {
        cin >> array[i];
    }
    
    int value;
    cout << "Insert Value: ";
    cin >> value;
    int position;
    cout<<"Enter position : ";
    cin>>position;
    if (!position>=1 && position>=10+1)
    {
        cout<<"Inavalid"<<endl;
        return 1;
    }
    else
    {
        for (int i = 10-1; i >=position-1; i--)
        {
            array[i+1]=array[i];
        }
    }
    array[position-1]=value;
    cout<<"Inserting : ";
    for (int i = 0; i <=10; i++)
    {
        cout<<" "<<array[i];
    }
    return 0;
}
