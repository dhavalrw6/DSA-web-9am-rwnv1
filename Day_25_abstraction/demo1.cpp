#include<iostream>
using namespace std;


// Abstract class
class Employee{
    public:
    
        // pure virtual function
        virtual void getEmployee() = 0;
        virtual void getEmployeeSalary() = 0;
};

class Manager : public Employee{
    public:
        void getEmployee(){
            cout<<"Employee Data..."<<endl;
        }

        void getEmployeeSalary(){
            cout<<"Employee Salary..."<<endl;
        }

        void getManager(){
            cout<<"From Manager class.."<<endl;
        }
};

int main()
{

    // Employee emp;
    Manager emp;

    emp.getEmployee();
    emp.getEmployeeSalary();
    emp.getManager();

    return 0;
}