#include<iostream>
using namespace std;

void addition(int *a,int *b){
    cout<<"addtion is: "<<*a+*b;
}

int main()
{
    int a=10,b=20;
    
    addition(&a,&b);

    return 0;
}