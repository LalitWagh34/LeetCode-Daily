
// https://leetcode.com/problems/rotate-function/description/

#include <iostream>
#include <vector>
#include<math.h>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int sum = 0;

        int F = 0;
        int n = nums.size();
    
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            F += i * nums[i];
        }

        int maxi = F;
        for (int i = 1; i < n; i++) {
            F += sum - n * nums[n - i];
            maxi = max(F, maxi);
        }

        return maxi;
    }
};


int main() {
    Solution sol;

    vector<int> arr = {3,6,7,11};

    cout << "Kth missing positive: " << sol.maxRotateFunction(arr) << endl;

    return 0;
}