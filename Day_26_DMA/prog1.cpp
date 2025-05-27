#include<iostream>
using namespace std;

int main()
{
    int *arr, size;

    cout<<"Enter size of array: ";
    cin>>size;

    arr = new int[size];

    if(arr == NULL)
    {
        cout<<"Memory not allocated";
        return -1;
    }
    else
    {
        cout<<"Memory allocated successfully";

    }

    delete[] arr;

    return 0;
}