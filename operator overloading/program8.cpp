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
    friend Akash operator +(Akash ob1, Akash ob2);
};

Akash operator +(Akash ob1, Akash ob2)

    {
        Akash tob;
        tob.x = ob1.x + ob2.x;
        return tob;
    }


int main()
{
    Akash ob1,ob2,ob3;
    ob1.setData(4);
    ob2.setData(5);
    ob3 = ob1 + ob2;
    ob1.show();
    ob2.show();
    ob3.show();
    return 0;
}    