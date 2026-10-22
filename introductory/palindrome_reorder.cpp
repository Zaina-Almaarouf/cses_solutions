#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    string half="",middle="";
    cin>>s;
    map <char , int> m;
    for(int i=0;i<s.size();i++)
    {
        m[s[i]]++;
    }
    int odd=0;
    for(auto p : m)
    {
        for(int k = 0; k < p.second / 2; k++)
        half += p.first;
    if(p.second % 2 == 1)
    {
        middle = p.first;
        odd++;
    }
    }
    if(odd>1)
        cout<<"NO SOLUTION\n";
    else
    {
        string rev = half;
        reverse(rev.begin(),rev.end());
        cout<<half<<middle<<rev<<"\n";
    }
}
