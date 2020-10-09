#include<iostream>
using namespace std;
class Base
{
    public:
    Base()
    {
        x = 10;
        y = 20;
        z = 30;
    }
    int x;
    protected:
    int y;
    private:
    int z;
};

class derived1: public Base
{
    public:
    void print()
    {
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
        //cout<<"z = "<<z<<endl;
    }
    /*
    x -> public 
    y -> protected
    z -> hidden
    */  
};
class derived2: protected Base
{
    /*
    x -> protected
    y -> protected
    z -> hidden
    */

};
class derived3: private Base
{
    /*
    x -> private
    y -> private
    z -> hidden
    */
};


int main()
{
    derived1 ob;
    ob.print();
    return 0;
}