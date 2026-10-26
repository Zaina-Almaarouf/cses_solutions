#include <bits/stdc++.h>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,x;
    bool found= true;
    cin>>n>>x;
    vector <pair<long long, int>> v(n);
    for (int i=0;i<n;i++){
        long long y;
        cin>>y;
        v[i]={y,i+1};
    }
    sort(v.begin() , v.end());
    int lo=0, hi=n-1;

    while(lo<hi){
        long long sum;
        sum= v[lo].first + v[hi].first;
        if(sum == x)
        {
            cout<<min(v[lo].second , v[hi].second)<<" "<<max(v[lo].second , v[hi].second)<<"\n";
            found=false;
            break;
        }
        else if(sum<x){lo++;}
        else{hi--;}
    }
    if(found){cout<<"IMPOSSIBLE\n";}


}
