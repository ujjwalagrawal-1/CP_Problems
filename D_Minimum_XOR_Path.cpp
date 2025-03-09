#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;

int n, m;
vector<vector<pair<int, ull>>> g;
ull ans = 1e19;

void dfs(int cur, ull x, vector<bool>& vis) {
    if(cur == n) {
        if(x < ans) ans = x;
        return;
    }
    vis[cur] = true;
    for(auto& e : g[cur]){
        int nxt = e.first;
        ull w = e.second;
        if(!vis[nxt]){
            dfs(nxt, x ^ w, vis);
        }
    }
    vis[cur] = false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    g.resize(n+1);
    for(int i=0; i<m; i++){
        int u, v; ull w;
        cin >> u >> v >> w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    vector<bool> vis(n+1, false);
    dfs(1, 0, vis);
    cout << ans << endl;
    return 0;
}
