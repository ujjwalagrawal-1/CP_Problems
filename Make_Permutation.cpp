#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long number;
    cin >> number;

    vector<long long> values(number);
    for (auto &val : values) {
        cin >> val;
    }
    sort(values.begin(), values.end());
    int current = 1;
    for (int i = 1; i <= number; ++i) {
        if (current < values[i - 1]) {
            cout << "NO" << endl;
            break;
        }
        if (current == number) {
            cout << "YES" << endl;
            break;
        } else {
            ++current;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    #ifndef ONLINE_JUDGE
        freopen("Error.txt", "w", stderr);
    #endif
    int test_cases = 1;
    cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}
