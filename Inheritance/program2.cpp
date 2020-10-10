#include<iostream>
using namespace std;

class Vehicle
{
    public:
    Vehicle()
    {
        cout<<"I am vehicle of base class"<<endl;

    }

    void applybrake()
    {
        cout<<"Apply brakes"<<endl;
    }

    void getCapacity()
    {
        cout<<"Get capacity"<<endl;

    }

    void fuelAmount()
    {
        cout<<"Fuel amount"<<endl;
    }

};

class Bus: public Vehicle
{
    public:
    Bus()
    {
        cout<<"I am bus of bus class"<<endl;
    }
};

class Car: public Vehicle
{
    public:
    Car()
    {
        cout<<"I am car of car class"<<endl;
    }
};

class Truck: public Vehicle
{
    public:
    Truck()
    {
        cout<<"I am truck of truck class"<<endl;
    }
};

int main()
{
    Vehicle v;
    v.applybrake();
    v.getCapacity();
    v.fuelAmount();
    
    Bus b;
    b.applybrake();
    b.getCapacity();
    b.fuelAmount();

    Car c;
    c.applybrake();
    c.getCapacity();
    c.fuelAmount();

    Truck t;
    t.applybrake();
    t.getCapacity();
    t.fuelAmount();
    return 0;
}