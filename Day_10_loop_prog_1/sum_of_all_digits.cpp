#include<iostream>
using namespace std;

int main()
{
    int num,sum=0,i=1,lastDigit;

    cout<<"Enter num: ";
    cin>>num;

    while(num>0)
    {
        lastDigit = num%10;
        sum += lastDigit;
        num = num/10;
    }
    cout<<"sum of all Digits: "<<sum;

    return 0;
}