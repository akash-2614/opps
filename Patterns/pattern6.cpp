#include<iostream>
using namespace std;
int main()
{
    int i,j,k,p,c=1,n,q;
    cout<<"Enter the number of rows";
    cin>>n;
    p=n*2;
    q=p;
    for(i=0;i<n;i++)
    {
        for(k=1;k<=c;k++,j++)
        cout<<k;
        for(j=k;j<=p;j++)
        {
            if(j==q)
            {
                for(k=c;k>0;k--,j++)
                cout<<k;
            }
            else
            {
                cout<<" ";
            }
        }
        q--;
        c++;
        cout<<"\n";
    }
}