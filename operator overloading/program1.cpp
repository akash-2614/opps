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
    void operator-()
    {
        x = -x;
    }
    void show()
    {
        cout<<"x = "<<x<<endl;
    }
};

int main()
{
    Akash ob;
    ob.setData(20);
    -ob;
    ob.show();
    return 0;
}