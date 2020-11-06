#include<iostream>
using namespace std;
int main()
{
    int a,b,c=0;
    cin>>a>>b;
    try
    {
        if(b==0)
            throw "Division BY Zero Exception";
        c=a/b;
    }
    catch(const char *c) // catching msg
    {
        cout<<c<<"\n";
    }
    cout<<c<<endl;
    return 0;
    
}