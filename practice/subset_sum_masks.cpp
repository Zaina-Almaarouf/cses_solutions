#include <bits/stdc++.h>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    int h =0;
    cin >> n;
    vector <int> v;
    for(int i=0; i<n;i++)
    {
        int w;
        cin>>w;
        v.push_back(w);
    }
    int target;
    cin>>target;

    for(int mask = 0; mask < (1<<n);mask++)
    {
        int sum = 0;
        for(int i =0 ; i<n ;i++)
        {
            if(mask & (1<<i))
            {
               sum += v[i];
            }

        }
        if( sum == target)
            h++;

    }
  cout<<h<<"\n";
}
