//Default constructor of base class is called first
//Basic inheritance

#include<iostream>
using namespace std;

class Parent1
{
    public:
    Parent1()
    {
        cout<<"Base class constructor 1"<<endl;
    }
};

class Parent2
{
    public:
    Parent2()
    {
        cout<<"Base class constructor 2"<<endl;
    }
};

class Child: public Parent1, public Parent2 //first Parent1 constructor  is called then constructor of Parent2 is called
{
    public:
    Child()
    {
        cout<<"Derived class constructor"<<endl;
    }
};

int main()
{
    Child c;
    return 0;
}

