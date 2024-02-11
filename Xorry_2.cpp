#include <iostream>
#include <vector>
using namespace std;

int lengthOfLIS(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> dp(n+1, vector<int>(n + 1, 0));

    // Initializing the last column of dp with 0
    for (int i = 0; i <= n; ++i) {
        dp[i][n] = 0;
    }

    for (int ind = n - 1; ind >= 0; ind--) {
        for (int p = ind - 1; p >= -1; p--) {
            int maxLen = 0 + dp[ind + 1][p + 1];

            if (p == -1 || nums[ind] > nums[p])
                maxLen = max(maxLen, 1 + dp[ind + 1][ind + 1]);

            dp[ind][p + 1] = maxLen;

            // Displaying the 2D array after each iteration
            cout << "Iteration (" << ind << ", " << p + 1 << "): ";
            for (int i = 0; i <= n; ++i) {
                for (int j = 0; j <= n; ++j) {
                    cout << dp[i][j] << " ";
                }
                cout << endl;
            }
            cout << "------------------------" << endl;
        }
    }

    return dp[0][0];
}

int main() {
    vector<int> nums = {10, 9, 2, 5, 3, 7, 101, 18};
    int result = lengthOfLIS(nums);

    cout << "Length of the Longest Increasing Subsequence: " << result << endl;

    return 0;
}
