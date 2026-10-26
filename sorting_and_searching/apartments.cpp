#include <bits/stdc++.h>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int applicants,appartments,difference;
    cin>>applicants>>appartments>>difference;
    vector <long long> desired(applicants);
    for(int i=0;i<applicants;i++)
        cin>>desired[i];
    sort(desired.begin(), desired.end());
    vector <long long> available(appartments);
    for(int i=0;i<appartments;i++)
        cin>>available[i];
    sort(available.begin(), available.end());
    int countt=0,x=0,y=0;
    while(x<applicants && y<appartments){
        if(desired[x] >= available[y]-difference && desired[x] <= available[y]+difference )
        {
            countt++;
            x++;
            y++;
        }
        else if(desired[x] > available[y]+difference)
        {
            y++;
        }
        else
        {
            x++;
        }

    }
    cout<<countt<<"\n";

}
