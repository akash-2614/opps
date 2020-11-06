#include<iostream>
using namespace std;
int main()
{
    int a,b,c=0;
    cin>>a>>b;
    try
    {
        if(b==0)
            throw b;//throwing integer b
        c=a/b;
    }
    catch(int exp)//catching integer b
    {
        cout<<"Division by zero is not accepted!!!\n";
    }
    cout<<c<<endl;
    return 0;
    
}