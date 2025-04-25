#include<iostream>
using namespace std;

class Student{
private:
    int rollNo;
    string name; 
 
public:  
    Student(int rollNo,string name){
      rollNo = rollNo;
      name = name;  
    }

    void getStudent(){
        cout<<"roll no is: "<<rollNo<<endl;
        cout<<"name is: "<<name<<endl;
    }

};

int main()
{
    Student std(21,"Krishna");
    std.getStudent();

    Student std1(24,"Radha");
    std1.getStudent();



    return 0;
}
