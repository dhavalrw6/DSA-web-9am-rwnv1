#include<iostream>
using namespace std;

int main()
{

    int sum,i=1,num,lastDigit,firstDigit;

    cout<<"Enter num: ";
    cin>>num;

    lastDigit = num%10;
    while(num>0)
    {
        firstDigit = num%10;
        num/=10;
    }

    cout<<"sum of first and last digit is "<<firstDigit+lastDigit;

    return 0;
}