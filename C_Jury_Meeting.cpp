#include <bits/stdc++.h>

using namespace std;

const int MOD = 998244353;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    int mx = *max_element(a.begin(), a.end());
    int cmx = count(a.begin(), a.end(), mx);
    int k = count(a.begin(), a.end(), mx - 1);
    int ans = 1, sub = 1;
    for (long long i = 1; i <= n; ++i) {
      ans = ans * i % MOD;
      if (i != k + 1) sub = sub * i % MOD;
    }
    if (cmx == 1) ans = (ans - sub + MOD) % MOD;
    cout << ans << '\n';
  }
}