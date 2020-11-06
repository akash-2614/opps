#include<iostream>
using namespace std;
int main()
{
    int x=10;
    cout<<"Before try block... -> will always execute"<<endl;
    try
    {
        if(x<11)
        {
            throw x;
            cout<<"After throw -> will never be executed"<<endl;
        }
    }
    catch(int x)
    {
        cout<<"exception caught!!"<<endl;
    }
    cout<<"After catch -> will always execute"<<endl;
    return 0;
}

    