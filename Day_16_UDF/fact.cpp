#include<iostream>
using namespace std;

int fact(int n);


int main()
{
    int n;
    cout<<"Enter n: ";
    cin >> n;

    cout<<"fact of "<<n<<" is "<<fact(n)<<endl;

    return 0;
}
// 3 * 2! 
//3 * 2 = 6
// 2 * 1 2

int fact(int n){

    if(n<=1) return 1;

    return n*fact(n-1);
}