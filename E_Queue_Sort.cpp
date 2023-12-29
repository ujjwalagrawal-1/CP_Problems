#include <iostream>
#include <vector>

using namespace std;

int min_operations_to_sort(int n, vector<int>& a) {
    int index = 0;
    while (index < n - 1 && a[index] <= a[index + 1]) {
        index++;
    }

    if (index == n - 1) {
        return 0;
    } else {
        if (a[0] >= a[n - 1]) {
            return 3;  // It takes 3 operations to sort the array
        } else {
            return -1;  // It is impossible to sort the array
        }
    }
}

int main() {
    int t;
    cin >> t;

    vector<int> results;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }

        results.push_back(min_operations_to_sort(n, a));
    }

    for (int i = 0; i < t; i++) {
        cout << results[i] << endl;
    }

    return 0;
}
