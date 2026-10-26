#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    long long target;
    cin>>n>>target;
    vector <long long> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int lo=0 , hi = n-1;
    bool found = false;
    while(lo<hi){
        long long sum = v[lo]+v[hi];
        if (sum == target){
            found = true;
            break;
        }else if(sum < target){
            lo++;
        }else{
            hi--;
        }
    }
    if(found){
        cout<<"YES\n";
    }else{
    cout<<"NO\n";
    }

}
