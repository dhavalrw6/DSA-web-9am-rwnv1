#include<iostream>
using namespace std;

int main()
{

    int a=101,b=387,c=500;

    a >= b
        ? a>=c 
            ? cout<<"a is max"
            : cout<<"c is max"
        : b>=c
            ? cout<<"b is max"
            : cout<<"c is max";


    return 0;
}