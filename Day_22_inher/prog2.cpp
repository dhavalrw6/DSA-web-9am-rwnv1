#include<iostream>
using namespace std;

class Company{
public:
    string comp_name = "Red & White Skill Eduction";
public:
    void getCompany(){
        cout<<comp_name<<endl;
    }
};

class Faculty : public Company{
public:
    string f_name="Dhaval";
public:
    void getEmployee(){
        cout<<comp_name<<endl;
        cout<<"Employee is: "<<this->f_name<<endl;
    }
    
};

class Student : public Faculty{
public:
    string s_name;
public:

    void setStudent(){
        cout<<"Enter student name: ";
        cin>>this->s_name;
    }

    void getStudent(){
        cout<<comp_name<<endl;
        cout<<"Faculty is: "<<this->f_name<<endl;
        cout<<"Student Name: "<<this->s_name<<endl;
    }
};

int main()
{
    Student std;

    // std.getCompany();
    std.setStudent();
    std.getStudent();

    return 0;
}