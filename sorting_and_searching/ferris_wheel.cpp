#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    long long x;
    cin>>n>>x;
    vector <long long> w(n);
    for(int i=0;i<n;i++)
        cin>>w[i];
    sort(w.begin(), w.end());
    int lo=0, hi=n-1;
    int gondolas = 0;
    while(lo < hi){
        long long sum = w[lo] + w[hi];
        if(sum <= x){
            gondolas++;
            hi--;
            lo++;
        }else{
            gondolas++;
            hi--;
        }
    }
    if(lo == hi){gondolas++;}
    cout<<gondolas<<"\n";
}
