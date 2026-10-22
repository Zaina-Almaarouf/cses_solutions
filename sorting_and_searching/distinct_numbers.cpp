#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int num;
    set <long long> s;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        s.insert(num);
    }
    cout<<s.size()<<"\n";

}
