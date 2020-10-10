// function overriding

#include<iostream>
using namespace std;

class Parent
{
    public:
    void set(int a)
    {
        x = a;
    }
    void print()
    {
        cout<<"Base value = "<<x<<endl;
    }
    int x;

};

class Child: public Parent
{
    public:
    void print()
    {
        cout<<"Derived value = "<<x<<endl;
    }
};

int main()
{
    Parent p;
    p.set(10);
    p.print();
    Child c;
    c.set(20);
    c.print();
    return 0;
}

