#include <bits/stdc++.h>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    stack <int> st;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == '(')
            st.push(1);
        else if(st.empty()){
            cout<<"NO\n";
            return 0;}
        else
            st.pop();
    }
    if(st.empty())
        cout<<"YES\n";
    else
        cout<<"NO\n";

}
