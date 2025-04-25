#include<iostream>
using namespace std;

// TNRN
void printMsg(){
    cout << "Hello, World!" << endl;
}

//TSRN
void add(int a, int b){
    cout << "Sum: " << a + b << endl;
}

//TNRS
int sum(){
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    return a+b;
}

int cube(int a){
    return a*a*a;
}

int main()
{
    int a=10;

    cout<<"cube: "<<cube(a)<<endl;

    return 0;
}