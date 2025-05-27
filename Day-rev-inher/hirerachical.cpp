#include<iostream>
using namespace std;

class Vehicle{
public:
    void printMsgVehicle(){
        cout<<endl<<"msg form vehicle";
    }
};
class Car : public Vehicle{
public:
    string name="BMW";
public:
    void printMsgCar(){
        cout<<endl<<"Car name: "<<this->name;
    }   
};
class Bike : public Vehicle{
public:
    string name="Hero";
public:
    void printMsgBike(){
        cout<<endl<<"Bike name: "<<this->name;
    }  
};

class VehicleFactory : public Car, public Bike{};

int main()
{
    // Car car;
    // Bike bike;

    // car.printMsgVehicle();
    // car.printMsgCar();

    // bike.printMsgVehicle();
    // bike.printMsgBike();

    VehicleFactory vehicle;
    
    vehicle.Car::printMsgVehicle();

    return 0;
}