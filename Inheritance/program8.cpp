#include<iostream>
using namespace std;

class A
{
    public:
    void set(int x)
    {
        this->x = x;
    }
    void show()
    {
        cout<<"Value of x = "<<x<<endl;
    }
    int x;
};

class B
{
    public:
    void print()
    {
        cout<<"Multiple Inheritance"<<endl;
    }
};

class C: public A, public B{};

int main()
{
    int x;
    cout<<"Enter a value: ";
    cin>>x;
    cout<<endl<<"******OUTPUT******"<<endl;
    C c;
    c.set(x);
    c.show();
    c.print();
    return 0;
}
