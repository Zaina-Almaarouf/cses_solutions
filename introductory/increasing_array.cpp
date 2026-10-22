#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    long long n_moves=0;
    vector <long long> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            n_moves+=a[i-1]- a[i];
            a[i]=a[i-1];
        }
    }
    cout<<n_moves<<"\n";
}
