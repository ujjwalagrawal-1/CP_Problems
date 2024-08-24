#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vec;
class UnionF {
public:
    vec pt, size;
    int cmp;

    UnionF(int n) {
        pt.resize(n);
        size.resize(n, 1);
        cmp = 0;
        for (int i = 0; i < n; i++) {
            pt[i] = i;
        }
    }

    int find(int x) {
        if (x != pt[x]) {
            pt[x] = find(pt[x]);
        }
        return pt[x];
    }

    void us(int x, int y) {
        int rx = find(x);
        int ry = find(y);
        if (rx != ry) {
            if (size[rx] < size[ry]) {
                swap(rx, ry);
            }
            pt[ry] = rx;
            size[rx] += size[ry];
            cmp--;
        }
    }
};

int main() {
    int n, m, q;
    cin >> n >> m >> q;

    UnionF uf(n * m);
    vector<vector<bool>> mat(n, vector<bool>(m, 0));
    vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    int dropCount = 0;

    while (q--) {
        char cmd;
        cin >> cmd;
        if (cmd == 'd') {
            int x, y;
            cin >> x >> y;
            x--; y--;
            int index = x * m + y;
            if (!mat[x][y]) {
                mat[x][y] = 1;
                uf.cmp++;
                for (auto &dir : directions) {
                    int nx = x + dir.first;
                    int ny = y + dir.second;
                    if (nx >= 0 && ny >= 0 && nx < n && ny < m && mat[nx][ny]) {
                        int neighborIndex = nx * m + ny;
                        uf.us(index, neighborIndex);
                    }
                }
            }
        } else if (cmd == 'c') {
            cout << uf.cmp << endl;
        }
    }

    return 0;
}