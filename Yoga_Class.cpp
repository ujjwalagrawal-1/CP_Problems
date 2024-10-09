#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long int x; 
    cin >> x;
    long long int y; 
    cin >> y;
    long long int z; 
    cin >> z;
    long long int result = 0;

    result += max((x / 2) * z, (x % 2 == 0 ? x : x - 1) * y);
    if (x % 2 == 1) {
        result += y;
    }
    cout << result << endl;
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
