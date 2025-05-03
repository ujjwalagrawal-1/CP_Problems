#include <bits/stdc++.h>
using namespace std;
int recursion(vector<int> & veci,int i,int prev){
    if(i < 0){
        return 0;
    }
    int ans = 0;
    if(prev == -1 || veci[i] < veci[prev]){
        ans = max(recursion(veci,i-1,i)+1,recursion(veci,i-1,prev));
    }
    else{
        ans = recursion(veci,i-1,prev);
    }
    return ans;
}
int dp[1001][1002];
int memoization(vector<int> & veci,int i,int prev){
    if(i == veci.size()){
        return 0;
    }
    if(dp[i][prev+1] != -1){
        return dp[i][prev+1];
    }
    int ans = 0;
    if(prev == -1 || veci[i] > veci[prev]){
        ans = max(memoization(veci,i+1,i)+1,memoization(veci,i+1,prev));
    }
    else{
        ans = memoization(veci,i+1,prev);
    }
    return dp[i][prev+1] =  ans;
}
// bottom up approch - benifits (Not Having any recurcive Stack Space);
int main(){
    int n;cin>>n;
    vector<int> veci(n);
    for(int j = 0;j<veci.size();j++){
        cin>>veci[j];
        cout<<veci[j]<<" ";
    }
    cout<<endl;
    // so first we will be discussing the memoization Approch 
    // memset(dp,-1,size</int>of(dp));
    // int ans = memoization(veci,0,-1);
    // cout<<ans<<endl;
    // bottom up approch - benifits (Not Having any recurcive Stack Space);
    vector<vector<int>> dp(n+1,vector<int>(n+1,0));
    for(int i = n-1;i >= 0;i--){
        for(int prev = i-1;prev >= -1;prev--){
            int ans = 0;
            if(prev == -1 || veci[i] > veci[prev]){
                ans = max(dp[i+1][i+1]+1,dp[i+1][prev+1]);
            }
            else{
                ans = dp[i+1][prev+1];
            }
            dp[i][prev+1] = ans;
        }
    }

    cout<<(dp[0][0])<<endl;
}