 #include <bits/stdc++.h>

using i64 = long long;

void solve() {
    int n, m;
    std::cin >> m >> n;
    
    int cnt1 = 0, cnt2 = 0;
    std::vector<int> a;
    for (int i = 0; i < m; i++) {
        int x;
        std::cin >> x;
        if (x == -1) {
            cnt1++;
        } else if (x == -2) {
            cnt2++;
        } else {
            a.push_back(x);
        }
    }
    std::sort(a.begin(), a.end());
    a.erase(std::unique(a.begin(), a.end()), a.end());
    
    int ans = 0;
    ans = std::max(ans, cnt1 + int(a.size()));
    ans = std::max(ans, cnt2 + int(a.size()));
    ans = std::min(ans, n);
    
    for (int i = 0; i < a.size(); i++) {
        int l = std::min(a[i] - 1, i + cnt1);
        int r = std::min(n - a[i], int(a.size()) - 1 - i + cnt2);
        ans = std::max(ans, l + 1 + r);
    }
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}