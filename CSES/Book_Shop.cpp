#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll a,b;
    cin>>a>>b;
    vector<ll> pr(a,0);
    vector<ll> pg(a,0);
    for(auto & itr : pr)cin>>itr;
    for(auto & itr : pg)cin>>itr;
    
    // dp[i][j] = maximum page till index = i from  0 and with j amount of money;
    vector<ll> curr(b+1,0),prev(b+1,0);
    for(int j = 0;j<=b;j++){
        if(pr[0] <= j){
            prev[j] = pg[0];
        }
    }
    for(int i = 1;i<a;i++){
        for(int j = 1;j<=b;j++){
            if(pr[i] <= j){
                curr[j] = max(prev[j - pr[i]] + pg[i],prev[j]);
            }
            else{
                curr[j] = prev[j];
            }
        }
        prev = curr;
    }
    cout<<prev[b]<<endl;
}