#include<iostream>
using namespace std;


int main()
{
    int arr[5] = {1,2,3,5,6};
    int *ptr[5];

    for(int i = 0; i < 5; i++) {
        ptr[i] = &arr[i];
    }

    for(int i = 0; i < 5; i++) {
        cout<<"value of ptr["<<i<<"]: "<<*ptr[i]<<endl;
    }

    return 0;
}