#include<iostream>
using namespace std;

class Demo1{
public:
   
    void printDemo(int a){
        cout<<"from methord 2., a is "<<a<<endl;
    }
    
};

class Demo2 : public Demo1{
    public:
    void printDemo(int a){
        cout<<"from methord 2., a is form demo2"<<a<<endl;
    }
};

int main()
{
    Demo2 obj;
    
    obj.printDemo(10);

  return 0;  
}