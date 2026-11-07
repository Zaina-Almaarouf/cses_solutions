#include <bits/stdc++.h>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin>>n;
    bool prime = (n >= 2);
    for(long long i=2; i*i <= n; i++)
    {
        if(n%i == 0)
        {
            prime = false;
            break;
        }
    }
    if(prime)
        cout<<"PRIME\n";
    else
        cout<<"NOT PRIME\n";
}
