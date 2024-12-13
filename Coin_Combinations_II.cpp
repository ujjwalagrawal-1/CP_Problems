#include <bits/stdc++.h> 
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int arr[a];
    for(int i = 0;i<a;i++){
        cin>>arr[i];
    }
    // int dp[a+1][b+1];
    // memset(dp,0,sizeof(dp));
    // for(int i = 0;i<a;i++){
    //     dp[i][0] = 1;
    // }
    int prev[b+1] = {0};
    int M = 1e9 + 7;
    int curr[b+1] = {0};
    prev[0] = curr[0] = 1;
    for(int i = 0;i < a;i++){
        for(int k = 0;k <= b;k++){
            if(i >= 1)
            curr[k] = prev[k];
            if(k - arr[i] >= 0){
                curr[k] = (curr[k] + curr[k-arr[i]])%M;
            }
        }
        for(int l = 0;l<b+1;l++){
            prev[l] = curr[l];
        }
    }
    cout<<prev[b]<<endl;
}