#include <bits/stdc++.h>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    int ct = 0;
    cin>>n;
    vector <bool> isPrime(n+1, true);
    isPrime[0] = false;
    if(n >= 1)
        isPrime[1] = false;
    for(long long i=2; i*i <= n; i++)
    {
        if(isPrime[i])
        {


            for(long long m = i*i; m <= n; m+=i)
                isPrime[m] = false;
        }
    }
    for(long long i = 2; i<=n ;i++)
    {
        if(isPrime[i])
            ct++;
    }
    cout<<ct<<"\n";
}
