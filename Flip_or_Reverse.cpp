#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string x,y,diff="";
        cin>>x>>y;
        vector<vector<ll>> ops;

        for(ll i=0;i<n;i++) diff+=(x[i]!=y[i]?'1':'0');

        ll i=0;
        while(i<n){
            if(diff[i]=='1'){
                if(i+1<n&&diff[i+1]=='1'){
                    ops.push_back({1,i+1,i+2});
                    i+=2;
                }
                else{
                    ops.push_back({1,i+1,i+1});
                    i++;
                }
            }
            else i++;
        }

        cout<<ops.size()<<"\n";
        for(auto &v:ops) cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<"\n";
    }
    return 0;
}
