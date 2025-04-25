#include<iostream>
using namespace std;

int main()
{
    int *a,**b,***c,num;

    num = 10;

    a = &num;
    b = &a;
    c = &b;

    cout<<"address of num: "<<*a<<endl;
    cout<<"address of num: "<<**b<<endl;
    cout<<"address of num: "<<***c<<endl;


    return 0;
}