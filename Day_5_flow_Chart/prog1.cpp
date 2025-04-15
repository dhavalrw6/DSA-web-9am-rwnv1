#include<iostream>
using namespace std;

int main(){

    int a,b,c,d;

    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;
    cout<<"Enter d: ";
    cin>>d;

    if(a >= b)
    {
        if(a >= c)
        {
            if(a >= d)
            {
                cout<<"a is max";
            }
            else
            {   
                cout<<"d is max";
            }
        }
        else
        {
            if(c >= d)
            {
                cout<<"c is max";
            }
            else
            {
                cout<<"d is max";
            }
        }
    }
    else
    {
        if(b >= c)
        {
            cout<<"b is max";
        }
        else
        {
            cout<<"c is max";
        }
    }

    return 0;
}