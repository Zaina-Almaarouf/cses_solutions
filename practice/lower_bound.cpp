#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector <int> v;
    for (int i=0;i<n;i++)
    {
        int y;
        cin>>y;
        v.push_back(y);
    }
    int x;
    cin>>x;
    int idx = lower_bound(v.begin(),v.end(),x)-v.begin();
    if(idx == n)
    {
        cout<<"none\n";
    }
    else
    {
        cout<<idx<<"\n";
    }
}
