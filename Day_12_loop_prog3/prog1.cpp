#include<iostream>
using namespace std;

int main()
{
    char k='A';
    for(int i=1; i <= 5; i++)
    {
        for(int j=1; j <= i; j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }

    return 0;
}

