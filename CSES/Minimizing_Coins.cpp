#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll a,b;
    cin>>a>>b;
    vector<ll> veci(a,0);
    for(auto& itr : veci){
        cin>>itr;
    }

    vector<ll> dp(b+1,1e10);
    dp[0] = 0;
    for(int i = 1;i<=b;i++){
        for(int j = 0;j<a;j++){
            if(veci[j] <= i){
                dp[i] = min(dp[i - veci[j]] + 1 ,dp[i]);
            }
        }
    }
    if(dp[b] >= 1e10){
        cout<<-1<<endl;
        return 0;
    }
    else{
        cout<<dp[b]<<endl;
    }
}