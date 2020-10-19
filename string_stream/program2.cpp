#include <bits/stdc++.h> 
using namespace std; 
int main()
{
    string s = "A good cook could cook good";
    map<string, int> FW;
    stringstream ss(s);
    string word;
    while(ss>>word)
    FW[word]++;

    map<string, int>::iterator i;
    for(i=FW.begin(); i!=FW.end(); ++i)
    cout<<i->first<<" -> "<<i->second<<endl;
    return 0;
} 
