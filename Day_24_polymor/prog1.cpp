#include<iostream>
using namespace std;

class Employee{
    public:

        void printData(){
            cout<<"Employee Data.";
        }
};

class Manager : public Employee{
    public:
        void printData(){
            cout<<"Manager Data.";
        }
};

int main()
{

    Manager m;

    m.printData();

    return 0;
}