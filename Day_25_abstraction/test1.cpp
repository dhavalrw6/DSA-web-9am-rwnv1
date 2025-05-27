#include<iostream>
using namespace std;
class Demo{
    protected:
        void print() {
            cout<<"Hello world!";
        }
};

class Demo2 : public Demo {
    public:
        void getDemo2(){
            print();
        }
};

int main()
{
    Demo2 obj;
    obj.print();
    obj.getDemo2();

    return 0;
}

