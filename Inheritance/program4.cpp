//Destructor
//opposite of constructor
//first derived class destructor is called and the base class

#include<iostream>
using namespace std;

class Parent1
{
    public:
    Parent1()
    {
        cout<<"Base class constructor 1"<<endl;
    }
    ~Parent1()
    {
        cout<<"Base class destructor 1"<<endl;
    }
};

class Parent2
{
    public:
    Parent2()
    {
        cout<<"Base class constructor 2"<<endl;
    }
    ~Parent2()
    {
        cout<<"Base class destructor 2"<<endl;
    }
};

class Child: public Parent1, public Parent2 
{
    public:
    Child()
    {
        cout<<"Derived class constructor"<<endl;
    }
    ~Child()
    {
        cout<<"Derived class destructor"<<endl;
    }
};

int main()
{
    Child c;
    return 0;
}

