#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    int current=1 , best=1;
    for(int i=1;i<s.size();i++)
    {
        if(s[i] == s[i-1])
        current+=1;
        else
            current=1;
        if(current > best)
            best=current;
    }
    cout<<best<<"\n";



}
