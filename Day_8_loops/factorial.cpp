#include<iostream>
using namespace std;

int main()
{
    int fact=1, i=1, n;

    cout<<"Enter n: ";
    cin>>n;

    i = n;
    while(i>=1)
    {
        fact = fact * i;
        i--;
    }

    cout<<"fact of "<<n<<" is: "<<fact;

    return 0;
}