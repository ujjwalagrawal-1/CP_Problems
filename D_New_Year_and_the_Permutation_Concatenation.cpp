#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int maxHCFPath(vector<vector<int>>& grid, int N, int M) {
    vector<vector<vector<int>>> dp(N, vector<vector<int>>(M));
    dp[0][0].push_back(grid[0][0]);

    for (int j = 1; j < M; ++j) {
        for (int hcf : dp[0][j - 1]) {
            dp[0][j].push_back(gcd(hcf, grid[0][j]));
        }
    }

    for (int i = 1; i < N; ++i) {
        for (int hcf : dp[i - 1][0]) {
            dp[i][0].push_back(gcd(hcf, grid[i][0]));
        }
    }

    for (int i = 1; i < N; ++i) {
        for (int j = 1; j < M; ++j) {
            for (int hcf : dp[i - 1][j]) {
                dp[i][j].push_back(gcd(hcf, grid[i][j]));
            }
            for (int hcf : dp[i][j - 1]) {
                dp[i][j].push_back(gcd(hcf, grid[i][j]));
            }
        }
    }

    return *max_element(dp[N - 1][M - 1].begin(), dp[N - 1][M - 1].end());
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> grid(N, vector<int>(M));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> grid[i][j];
        }
    }

    cout << maxHCFPath(grid, N, M) << endl;

    return 0;
}