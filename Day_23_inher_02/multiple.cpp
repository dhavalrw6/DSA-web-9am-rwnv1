#include<iostream>
using namespace std;

class A{
    public:
        void getMsgA(){
            cout<<"Hello From A class"<<endl;
        }
};
class B{
    public:
        void getMsgB(){
            cout<<"Hello From B class"<<endl;
        }
};

class C : public A, public B{};

int main()
{
    C obj;

    obj.getMsgA();
    obj.getMsgB();

    return 0;
}