//unary operator using friend function

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
    friend void operator-(Akash &ob);
    void show()
    {
        cout<<"x = "<<x<<endl;
    }
};
void operator-(Akash &ob)
{
    ob.x = -ob.x;
}
int main()
{
    Akash ob;
    ob.setData(-10);
    -ob;
    ob.show();
    return 0;
}