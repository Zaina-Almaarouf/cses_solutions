#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector <int> v;
    for(int i=0;i<n;i++)
    {
        int y;
        cin>>y;
        v.push_back(y);
    }
    int lo=0 , hi=n-1,x;
    cin>>x;
    int ans=-1;

    while(lo <= hi)
    {
        int mid = (lo + hi)/2;
        if(v[mid]==x)
        {
            ans=mid;
            break;
        }
        else if (v[mid] < x)
            lo = mid+1;
        else
            hi=mid-1;
    }
    cout<<ans<<"\n";
}
