// Program having more than one exception
// catch block:- it can catch any  exception .It should be at the end of all other catch

#include<iostream>
using namespace std;
int main()
{
    int x[2] = {-1,2};
    for(int i=0; i<2; ++i)
    {
        int e = x[i];
        try
        {
            if(e<0)
                throw e;
            else
                throw 'e';
        }
        /*catch(int i)
        {
            cout<<"Integer Exception\n";
        }
        catch(char c)
        {
            cout<<"Character Exception\n";
        }*/

        catch(...) //catch block
        {
            cout<<"Exception caught...\n";
        }
        
    }
    return 0;
    
}