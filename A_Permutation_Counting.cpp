#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

bool isFeasible(const vector<int>& files, int k, int maxTime) {
    int currentLoad = 0, printersUsed = 1;
    for (int time : files) {
        if (currentLoad + time <= maxTime) {
            currentLoad += time;
        } else {
            printersUsed++;
            if (printersUsed > k || time > maxTime) return false;
            currentLoad = time;
        }
    }
    return true;
}

int minimizeMaxWorkingTime(const vector<int>& files, int k) {
    int left = *max_element(files.begin(), files.end());
    int right = accumulate(files.begin(), files.end(), 0);
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (isFeasible(files, k, mid)) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return left;
}

int main() {
    int k, n;
    cin >> k >> n;
    vector<int> files(n);
    for (int i = 0; i < n; ++i) {
        cin >> files[i];
    }
    // for()
    int result = minimizeMaxWorkingTime(files, k);
    cout << result << endl;

    return 0;
}
