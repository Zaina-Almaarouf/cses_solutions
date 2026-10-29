#include <bits/stdc++.h>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector <pair<int, int>> v(n);
    for(int i=0; i<n ; i++)
    {
        int s,e;
        cin>>s>>e;
        v[i]={e,s};
    }
    sort(v.begin(), v.end());
    int lastend=0, c=0;
    for(int i=0; i<n ; i++)
    {
        if(v[i].second >= lastend)
        {
            lastend = v[i].first;
            c++;
        }
    }
     cout<<c<<"\n";
}

