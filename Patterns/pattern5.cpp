#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n,c=1,q,p;
    cout<<"Enter the number of rows";
    cin>>n;
    p=n*2;
    q=p-1;
    for(i=0;i<n;i++)
    {
         for(k=0;k<c;k++)
            cout<<"*";
        for(j=k;j<p;j++)
        {
           
            if(j==q)
            {
            for(k=0;k<c;k++,j++)
            cout<<"*";
            }
            else
            cout<<" ";
        }
        c++;
        q--;
        cout<<"\n";

    }
}