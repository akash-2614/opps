//exception in classes
//always catch derived class exception first 
//otherwise the compiler will not  catch the derived class exception

#include<iostream>
using namespace std;

class Parent{};
class Child: public Parent{};

int main()
{
    Parent P;
    Child C;
    try
    {
        throw P;
    }
    catch(Child P)
    {
        cout<<"Caught Derived  exception..."<<endl;
    }
    catch(Parent P)
    {
        cout<<"Caught Base exception..."<<endl;
    }

     try
    {
        throw C;
    }
    catch(Child C)
    {
        cout<<"Caught Derived  exception..."<<endl;
    }
    catch(Parent C)
    {
        cout<<"Caught Base exception..."<<endl;
    }
    return 0;
    
}