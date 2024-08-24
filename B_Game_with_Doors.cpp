#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

const int M = 100000;
bool vis[M + 1];

pair<int, int> bfs(int start,vector<int> adj[],vector<int> &cl) {
    queue<int> q;
    q.push(start);
    vis[start] = true;

    int ec = 0;
    int oc = 0;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        if (cl[node] % 2 == 0)
            ec++;
        else
            oc++;

        for (int neighbor : adj[node]) {
            if (!vis[neighbor]) {
                vis[neighbor] = true;
                q.push(neighbor);
            }
        }
    }

    return {ec, oc};
}

int main() {
    int n;
    cin >> n;
    vector<int> cl(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> cl[i];
    }
    vector<int> adj[M + 1];
    for (int i = 0; i < n - 1; i++) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    int me = 0, mo = 0;

    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            pair<int,int> a = bfs(i,adj,cl);
            me = max(me, a.first);
            mo = max(mo, a.second);
        }
    }

    cout << me << " " << mo << endl;

    return 0;
}
