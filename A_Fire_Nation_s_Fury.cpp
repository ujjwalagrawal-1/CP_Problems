#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;
const int MAXN = 100005;

vector<int> adj[MAXN];
int in[MAXN], out[MAXN], flat[MAXN], timer;
int fenwick[MAXN], subtree_size[MAXN];
int N;

// Fenwick Tree Operations
void update(int idx, int val) {
    while (idx <= N) {
        fenwick[idx] += val;
        idx += idx & -idx; // Move to next index
    }
}

int query(int idx) {
    int sum = 0;
    while (idx > 0) {
        sum += fenwick[idx];
        idx -= idx & -idx; // Move to parent index
    }
    return sum;
}

// DFS for Euler Tour
void dfs(int node, int parent) {
    in[node] = ++timer; // Entry time
    flat[timer] = node; // Flattening tree into array
    subtree_size[node] = 1; // Count itself

    for (int child : adj[node]) {
        if (child != parent) {
            dfs(child, node);
            subtree_size[node] += subtree_size[child];
        }
    }
    out[node] = timer; // Exit time
}

// Solve function for each test case
void solve() {
    cin >> N;

    // Reset data structures
    for (int i = 1; i <= N; i++) {
        adj[i].clear();
        fenwick[i] = 0;
    }
    timer = 0;

    // Read edges
    for (int i = 0; i < N - 1; i++) {
        int A, B;
        cin >> A >> B;
        adj[A].push_back(B);
        adj[B].push_back(A);
    }

    // Run DFS from root (node 1) to get Euler Tour
    dfs(1, -1);

    // Update Fenwick Tree with subtree sizes
    long long jealousy_sum = 0;
    for (int i = 1; i <= N; i++) {
        update(in[i], subtree_size[i]); // Store subtree size in BIT
    }

    // Compute jealousy sum using Fenwick Tree
    for (int i = 1; i <= N; i++) {
        jealousy_sum = (jealousy_sum + query(out[i]) - query(in[i] - 1)) % MOD;
    }

    cout << jealousy_sum << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
