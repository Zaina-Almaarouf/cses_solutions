#include <bits/stdc++.h>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector <long long> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    set<long long> s;
    int l=0,best=0;
    for(int r=0; r<n; r++)
    {
        while(s.count(v[r]))
        {
            s.erase(v[l]);
            l++;
        }
        s.insert(v[r]);
        int c=s.size();
        best= max(best,c );
    }
    cout<<best<<"\n";
}
