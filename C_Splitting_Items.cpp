#include <iostream>
#include <vector>
using namespace std;

struct node {
    node* links[201] = {nullptr}; 
    int cnt = 0;
};

void insert(vector<int> &a, node* root) {
    node* temp = root;
    for (int i = 0; i < (int)(a.size()); i += 1) {
        if (a[i] < 0) {
            break;
        }
        if (!temp->links[a[i]]) {
            temp->links[a[i]] = new node();
        }
        temp = temp->links[a[i]];
        temp->cnt++;
    }
}

int find(vector<int> &q, node* root) {
    node* temp = root;
    for (int i = 0; i < (int)(q.size()); i += 1) {
        if (q[i] == -1) {
            break;
        }
        if (!temp->links[q[i]]) {
            return 0;
        }
        temp = temp->links[q[i]];
    }
    return temp->cnt;
}

void BobnBot(int N, int m, vector<vector<int>> &games, int q, vector<vector<int>> &queries) {
    node* root = new node();
    for (int i = 0; i < N; i += 1) {
        insert(games[i],root);
    }
    int cnt = 0;
    for (int i = 0; i < q; i += 1){
        cnt += find(queries[i],root);
    }
    cout << cnt << endl;
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> games(n, vector<int>(m));
        for (int i = 0; i < n; i += 1) {
            for (int j = 0; j < m; j += 1) {
                cin >> games[i][j];
            }
        }

        int q;
        cin >> q;
        vector<vector<int>> queries(q, vector<int>(m));
        for (int i = 0; i < q; i += 1) {
            for (int j = 0; j < m; j += 1) {
                cin >> queries[i][j];
            }
        }

        BobnBot(n, m, games, q, queries);
    }
    return 0;
}
