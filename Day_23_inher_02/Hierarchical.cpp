#include<iostream>
using namespace std;

class A{
    public:
        void getMsgA(){
            cout<<"Hello From A class"<<endl;
        }
};
class B: public A{
    public:
        void getMsgB(){
            cout<<"Hello From B class"<<endl;
        }
};

class C : public A{
    public:
       void getMsgC(){
            cout<<"Hello From B class"<<endl;
        } 
};

class D : public B ,public C{
    public:

};

int main()
{
    D objD;


    objD.B::getMsgA();

    return 0;
}