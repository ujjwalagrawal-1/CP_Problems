#include <bits/stdc++.h>
using namespace std;


void solve(vector<int>& nums, int &sum, int i, int kis) {
        if (i >= nums.size() || i < 0) {
            return;
        }

        sum += abs(nums[kis] - nums[i]);
        solve(nums, sum, i+=1, kis);
        solve(nums, sum, i-=1, kis);
    }

int main () {
    vector<int> nums;
    int x;cin>>x;
    for(int i = 0;i<x;i++){
        int t;cin>>t;
        nums.push_back(t);
    }
        int sum = 0;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            sum = 0;
            solve(nums, sum, i, i);
            ans.push_back(sum);
            
        }

        
    }