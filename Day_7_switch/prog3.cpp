#include<iostream>
using namespace std;

int main()
{

    double avg;
    char grade;

    cout<<"Enter your avg: ";
    cin>>avg;

    avg >= 80 
        ? grade = 'A'
        : avg >= 70
            ? grade = 'B'
            : avg >= 60
                ? grade = 'C'
                : avg >= 50
                    ? grade = 'D'
                    : grade = 'F';


        switch(grade)
        {
            case 'A': 
                cout<<"your grade is: A"<<endl;
                 break;
            case 'B': 
                cout<<"your grade is: B"<<endl;
                 break;
            case 'C': 
                cout<<"your grade is: C"<<endl;
                 break;
            case 'D': 
                cout<<"your grade is: D"<<endl;
                 break;
            default:
                cout<<"Your grade is: F"<<endl;
        }


    return 0;
}