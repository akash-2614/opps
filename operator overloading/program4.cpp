//increment and decrement 
//post-fix

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
    Akash operator++(int)
    {
        Akash tob;
        tob.x = x;
        x++;
        return tob;
    }
    Akash operator--(int)
    {
        Akash tob;
        tob.x = x;
        x--;
        return tob;
    }
    void show()
    {
        cout<<"x = "<<x<<endl;
    }
};
int main()
{
    Akash ob1,ob2;
    ob1.setData(4);
    ob2 = ob1++;
    ob1.show();
    ob2.show();

    ob1.setData(4);
    ob2 = ob1--;
    ob1.show();
    ob2.show();
    return 0;
}