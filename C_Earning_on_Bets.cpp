#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> k(n);
    for (int i = 0; i < n; ++i) {
        cin >> k[i];
    }
    
    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += k[i];
    }

    if (sum == n) {
        cout << -1 << endl;
        return;
    }

    vector<int> bets(n);
    long long totalBets = 0;
    for (int i = 0; i < n; ++i) {
        bets[i] = 1;  // start by betting 1 coin on each outcome
        totalBets += 1;
    }

    for (int i = 0; i < n; ++i) {
        if (totalBets < k[i]) {
            bets[i] += k[i] - totalBets;
            totalBets = k[i];
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << bets[i] << (i == n - 1 ? '\n' : ' ');
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
