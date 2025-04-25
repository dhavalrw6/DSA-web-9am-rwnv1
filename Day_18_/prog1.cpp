#include<iostream>
using namespace std;

int main()
{
    int *p,*q,a,b,div,mul;

    cout<<"Enter a: ";
    cin>>a;

    cout<<"Enter b: ";
    cin>>b;

    p=&a; q=&b;

    div = *p / *q;
    mul = *p * *q;

    cout<<"div of a and b is: "<<div;
    cout<<"mul of a and b is: "<<mul;

    return 0;
}