// Parameterized constructor
//they are not called automatically

#include<iostream>
using namespace std;

class Parent 
{
    public:
    Parent(int x)
    {
        this->x = x;
        cout<<"Base class"<<endl;
    }
    void print()
    {
        cout<<"variable of base class = "<<x<<endl;
    }
    int getX()  //this is use so that we can use private data member (x) of base class in derived class
    {
        return x;
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
    void print()  //this function overriding
    {
        cout<<"variable of derived class = "<<getX()<<endl;
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