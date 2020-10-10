//By using friend function
//pre-fix


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
    friend Akash operator++(Akash &ob);
};

Akash operator++(Akash &ob)
{
    Akash tob;
    ob.x++;
    tob.x = ob.x;
    return tob;
}

int main()
{
    Akash ob1,ob2;
    ob1.setData(10);
    ob2 = ++ob1;
    ob1.show();
    ob2.show();
    return 0;
}