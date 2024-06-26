#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long int number;
    cin >> number;
    if (number % 2 == 0) {
        long long int start = 1;
        long long int end = number;
        while (start < end) {
            cout << start << " " << end << " ";
            start++;
            end--;
        }
    } else {
        long long int start = 1;
        long long int end = number - 1;
        while (start < end) {
            cout << start << " " << end << " ";
            start++;
            end--;
        }
        cout << number << " ";
    }
    cout << endl;
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
