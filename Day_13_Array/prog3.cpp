#include<iostream>
using namespace std;

int main()
{
    int arr[5],index,element;

    for(int i = 0; i < 5 ; i++)
    {
        cout<<"Enter element "<<i<<" : ";
        cin>>arr[i];
    }
    cout<<endl<<"--------------------"<<endl;
    cout<<"array elements : ";
    for(int val : arr)
    {
        cout<<val<<", ";
    }


    

    return 0;
}