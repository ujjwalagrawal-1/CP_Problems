#include <bits/stdc++.h>
using namespace std;

#define bullet() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

// Function to reverse a number
int reverse(int num) {
    int rev = 0;
    while (num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}


int concat(int a, int b) {
    int i = 1;
    while (i <= b)
        i *= 10;
    return a * i + b;
}

void solve() {
    int x, y;
    cin >> x >> y;
    vector<int> veci(x);
    for (int &num : veci)
        cin >> num;
    
    sort(veci.begin(), veci.end());

    int t = 0;
    while (veci.size() != 1) {
        if (t % 2 == 0) {
            int ele = veci[0];
            ele = reverse(ele);
            veci[0] = ele;
            t++;
        } else {
            int a = veci.back();
            veci.pop_back();
            int b = veci.back();
            veci.pop_back();
            int ele = concat(a, b);
            veci.push_back(ele);
            t++;
        }
        sort(veci.begin(), veci.end());
    }

    if (veci[0] > pow(10, y)) {
        cout << "Sasha" << endl;
    } else {
        cout << "Anna" << endl;
    }
}

int main() {
    bullet()

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
