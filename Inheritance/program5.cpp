// Parameterized constructor
//they are not called automatically

#include<iostream>
using namespace std;

class Parent 
{
    public:
    Parent(int a)
    {
        x = a;
        cout<<"Base class"<<endl;
    }
    void print()
    {
        cout<<"variable of base class = "<<x<<endl;
    }
    private:
    int x;
};

class Child: public Parent
{
    public:
    Child(int j): Parent(j)
    {
        cout<<"Derived class"<<endl;
    } 
};

int main()
{
    int j;
    cout<<"Enter the value: ";
    cin>>j;
    Child c(j);
    c.print();

    Parent p(10);
    p.print();
    return 0;
}

/* OR
class Child: public Parent
{
    public:
    Child(): Parent(4)
    {
        cout<<"Derived class"<<endl;
    } 
};

int main()
{
    Child c;
    c.print()
    return 0;
}
*/