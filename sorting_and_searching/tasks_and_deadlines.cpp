#include <bits/stdc++.h>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector < pair<long long,long long>> w(n);
    for(int i=0;i<n;i++)
        cin>>w[i].first>>w[i].second;
    sort(w.begin(), w.end());
    long long reward=0;
    long long total=0;
    for(int i=0;i<n;i++){
            total+=w[i].first;
        reward+=(w[i].second - total);

    }
    cout<<reward<<"\n";

}
