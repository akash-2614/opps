#include<iostream>
using namespace std;
int main()
{
    int i,j,c=1,n;
    char ch = 'A';
    cout<<"Enter the number of rows";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<c;j++)
        cout<<ch;
        cout<<"\n";
        c++;
        ch++;
    }
    return 0;
}