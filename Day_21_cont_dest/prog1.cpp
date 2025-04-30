#include<iostream>
using namespace std;

class Student{
    

    public:
    static int rollNo;
    static void getStudent(){
       cout<<"Hello Students..";
    }
};

// int Student::rollNo = 21;

int main()
{

   Student::getStudent();
   cout<<"roll no: "<<Student::rollNo;

    return 0;
}