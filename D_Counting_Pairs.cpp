#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
void solve() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
 
        vector<ll> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
 
        sort(arr.begin(), arr.end());
        ll ans = 0;
        ll total = accumulate(arr.begin(),arr.end(),0LL);
        
        for (int i = 0; i < n; i++) {

            ll rem = total - arr[i];
            auto it1 = lower_bound(arr.begin() + i+1, arr.end(), rem-y);
            auto it2 = upper_bound(arr.begin() + i+1, arr.end(), rem-x);

            ans += (it2-it1);
        }

        cout << ans <<endl;
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
    return 0;
}
