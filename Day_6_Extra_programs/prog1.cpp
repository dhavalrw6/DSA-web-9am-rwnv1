#include<iostream>
using namespace std;

int main()
{

    int rollno,sub1,sub2,sub3,total; 
    string s_name;
    double avg;

    cout<<"Enter Roll No: ";
    cin>>rollno;
    cout<<"Enter Name: ";
    cin>>s_name;
    cout<<"Enter Marks of Subject 1: ";
    cin>>sub1;
    cout<<"Enter Marks of Subject 2: ";
    cin>>sub2;
    cout<<"Enter Marks of Subject 3: ";
    cin>>sub3;

    total = sub1+sub2+sub3;
    avg = total/3;

    cout<<endl;
    cout<<"RollNo is: "<<rollno<<endl;
    cout<<"Name is: "<<s_name<<endl;
    cout<<"sub1 Marks is: "<<sub1<<endl;
    cout<<"sub2 Marks is: "<<sub2<<endl;
    cout<<"sub3 Marks is: "<<sub3<<endl;
    cout<<"Total Marks is: "<<total<<endl;
    cout<<"Average Marks is: "<<avg<<endl;

    if(sub1 <= 100 && sub2 <= 100 && sub3 <= 100)
    {
        if(sub1 >= 35 && sub2 >= 35 && sub3 >= 35)
        {
            cout<<"Pass"<<endl;
            
            if(avg>=80)
            {
                cout<<"Grade A"<<endl;
            }
            else if(avg>=60)
            {
                cout<<"Grade B"<<endl;
            }
            else if(avg>=50)
            {
                cout<<"Grade C"<<endl;
            }
            else
            {
                cout<<"Pass Class"<<endl;
            }
            
        }
        else
        {
            cout<<"Fail"<<endl;
        }
    }
    else
    {
        cout<<"Enter valid marks. Marks should be between 0-100"<<endl;
    }


    return 0;
}


// 1. rollno, student name, sub1, sub2, sub3, total, avg, grade
// avg >= 80 'A' or avg >= 60 'B' or avg >= 50 'C' or 'Pass Class'
//