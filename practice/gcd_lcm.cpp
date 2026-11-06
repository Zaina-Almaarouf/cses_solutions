#include <bits/stdc++.h>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    long long a,b;
    cin>>a>>b;
    long long oa = a, ob = b;
    long long r;
    if(a>b)
        swap(a,b);
    while(a != 0)
    {
        r = b%a;
        b = a;
        a = r;

    }
    long long lcm = b * (oa/b) * (ob/b);
    cout<<b<<" "<<lcm<<"\n";
}
