#include <bits/stdc++.h> 
using namespace std; 
int main()
{
    int i=0;
    string s = "23,34,45,56,67";
    string s1 = s;
    while(s1[i]!='\0')
    {
        if(s1[i]==',')
        s1[i] = ' ';
        ++i;
    }

    stringstream ss(s1);
    int n;
    while(ss >> n)
    cout<<n<<endl;
    return 0; 
} 
