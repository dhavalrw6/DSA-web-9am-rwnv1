#include<iostream>
using namespace std;

int main(){

    double avg;

    cout<<"Enter your avg: ";
    cin>>avg;

    if(avg <= 100 && avg >= 35)
    {
        if(avg >= 80)
        {
            cout<<"A Grade";
        }
        else if(avg>= 60)
        {
            cout<<"B Grade";
        }
        else if(avg>= 50)
        {
            cout<<"C Grade";
        }
        else
        {
            cout<<"Pass Class";
        }
    }
    else if(avg < 35)
    {
        cout<<"Fail.";
    }
    else
    {
        cout<<"Wrong input.";
    }



    return 0;
}

// avg >= 80 then grade is A
// avg >= 60 then grade is B
// avg >= 50 then grade is C
// else pass class