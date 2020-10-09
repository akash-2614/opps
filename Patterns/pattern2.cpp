#include<iostream>
using namespace std;
int main()
{
    int i,j,n,c=1;
    cout<<"Enter the number of rows";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=1;j<=c;j++)
        cout<<j;
        cout<<"\n";
        c++;
    }
    return 0;
}