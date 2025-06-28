#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll a;cin>>a;
    // state = dp[n] = state total number of ways to produce sum = n by throwing dice one or more times
    ll dp[1000006];
    memset(dp,0,sizeof(dp));
    dp[0] = 1;
    for(int i = 1;i<=a;i++){
        if(i >= 1){
            dp[i] += dp[i-1];
        }
        if(i >= 2){
            dp[i] += dp[i-2];
        }
        if(i >= 3){
            dp[i] += dp[i-3];
        }
        if(i >= 4){
            dp[i] += dp[i-4];
        }
        if(i >= 5){
            dp[i] += dp[i-5];
        }
        if(i >= 6){
            dp[i] += dp[i-6];
        }
        dp[i] %= 1000000007;
    }
    cout<<dp[a]<<endl;
}