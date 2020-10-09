#include<iostream>
using namespace std;
int main()
{
    int i,j,c=1,n,k,p;
    cout<<"Enter the number of rows";
    cin>>n;
    p=n-1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j == p)
            {
            for(k=0;k<c;k++)
            cout<<"*";
            }
            else
            {
                cout<<" ";
            }  
        }
        cout<<"\n";
        c+=2;
        p--;
    }
}