#include <bits/stdc++.h>
using namespace std;
 
int dfs(int n,int p,int s,vector<vector<pair<int,int>>>&ki) {
    int mx = 0;
    for(auto i:ki[n]) {
        if(i.first == p) continue;
        int now = dfs(i.first,n,i.second,ki);
        if(s < i.second) {
            mx = max(mx,now);
        }
        else {
            mx = max(mx,now+1);
        }
    }
    return mx;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<vector<pair<int,int>>>ki(n);
        for(int i = 0; i < n-1; i++) {
            int u,v;
            cin >> u >> v;
            u--;
            v--;
            ki[u].push_back({v,i});
            ki[v].push_back({u,i});
        }
        cout << dfs(0,-1,-1,ki)+1 << "\n";
    }
}