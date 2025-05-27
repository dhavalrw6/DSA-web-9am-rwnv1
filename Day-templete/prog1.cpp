#include<iostream>
using namespace std;

template <typename T1,typename T2>
class Demo{
    public:
    T1 a;
    T2 b;

    Demo(T1 a,T2 b){
        this->a = a;
        this->b = b;
    }

    void getData(){
        cout<<"a is: "<<this->a<<endl;
        cout<<"b is: "<<this->b<<endl;
    }

};



int main()
{
    Demo<int,double> d(10,20.54);
    
    d.getData();

    return 0;
}