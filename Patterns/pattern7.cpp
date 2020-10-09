#include<iostream>
using namespace std;
int main()
{
    int i,j,k,p,n,c=1;
    cout<<"Enter the number of rows";
    cin>>n;
    p=n-1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j == p)
            {
                for(k=1;k<=c;k++)
                {
                    cout<<k;
                    cout<<" ";
                }
            }
            else
            {
                cout<<" ";
            }
            
        }
        c++;
        p--;
        cout<<"\n";
    }
    c-=2;
    p++;
    for(i=0;i<n;i++)
    {
        cout<<" ";t
        for(j=0;j<n;j++)
        {
            if(j==p)
            for(k=1;k<=c;k++)
            {
                cout<<k;
                cout<<" ";
            }
            else
            {
                cout<<" ";
            }
            
        }
        c--;
        p++;
        cout<<"\n";
    }
    return 0;
}