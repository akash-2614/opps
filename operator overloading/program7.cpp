//+ operator overloading

#include<iostream>
using namespace std;
class Akash
{
    private:
    int x;
    public:
    void setData(int a)
    {
        x = a;
    }
    void show()
    {
        cout<<"x = "<<x<<endl;
    }
    Akash operator +(Akash ob)
    {
        Akash tob;
        tob.x = x+ob.x;
        return tob;
    }
};

int main()
{
    Akash ob1,ob2,ob3;
    ob1.setData(5);
    ob2.setData(3);
    ob3 = ob1+ob2;
    ob1.show();
    ob2.show();
    ob3.show();
    return 0;
}