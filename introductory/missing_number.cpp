#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin>>n;
    long long sum=0;
    long long allNums=0;
    long long* arr = new long long[n-1];
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    for(int i=1;i<=n;i++)
        allNums+=i;
    cout<<allNums - sum<<"\n";



}
