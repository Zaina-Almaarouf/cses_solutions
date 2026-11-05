#include <bits/stdc++.h>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    stack <char> st;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == '(' ||s[i] == '[' || s[i] == '{' )
            st.push(s[i]);
        else if(st.empty())
        {
            cout<<"NO\n";
            return 0;
        }

        else  if( (st.top() == '(') && (s[i] == ')'))
        {
            st.pop();
        }

        else if(st.top() == '[' && s[i] == ']')
        {
            st.pop();
        }
        else if(st.top() == '{' && s[i] == '}')
        {
            st.pop();
        }
        else
        {
            cout<<"NO\n";
            return 0;
        }

    }
    if(st.empty())
        cout<<"YES\n";
    else
        cout<<"NO\n";

}
