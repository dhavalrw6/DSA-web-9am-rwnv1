#include<iostream>
using namespace std;

class Animal
{
public:
    string name = "Animal";

public:
    void printMsgAnimal(){
        cout<<"Hello Form animal class"<<endl;
    }
};

class Dog 
{
public:
    void printMsgDog(){
        cout<<"Hello From dog class"<<endl;
    }

};

class Pitbull : public Animal, public Dog{
public:
    void printMsgPitbull(){
        cout<<"Hello From Pitbull class"<<endl;
    }
};

int main()
{
   Pitbull pitbull;

   pitbull.printMsgAnimal();
   pitbull.printMsgDog();
   pitbull.printMsgPitbull();

   cout<<"Print msg form main function: "<<pitbull.name;

    return 0;
}