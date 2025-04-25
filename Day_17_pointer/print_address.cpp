#include<iostream>
using namespace std;


int main()
{
    int a = 10;
    int *ptr;

    ptr = &a;

    cout<<"address of value: "<<ptr<<endl;
    cout<<"value of address: "<<*ptr<<endl;

    return 0;
}