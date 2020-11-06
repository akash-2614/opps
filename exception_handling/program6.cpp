#include<iostream>
using namespace std;
int main()
{
    try
    {
        throw 'a';
    }
    catch(int c)
    {
        cout<<"exception caught..."<<endl;
    }
    catch(...)
    {
        cout<<"default exception caught!!!"<<endl;
    }
    return 0;
}
    