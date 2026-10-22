#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int n,q;
    int r,l;
    cin>>n>>q;
    vector <long long> a;
    for(int i=0;i<n;i++)
    {
        long long x;
        cin>>x;
        a.push_back(x);
    }
    vector <long long> p(n+1,0);
    for(int i=0;i<n;i++)
    {
        p[i+1]=p[i]+a[i];
    }
    for(int i=0;i<q;i++)
    {
        cin>>l>>r;
        cout<<p[r]-p[l-1]<<"\n";
    }



}
