#include<iostream>
using namespace std;

class Animal{
public:
    void printAnimal(){
        cout<<"Hello From Adnimal Class";
    }
};

class Dog : public Animal{};

class PitBull : public Dog{};

int main()
{
    PitBull dog;

    dog.printAnimal();

    return 0;
}