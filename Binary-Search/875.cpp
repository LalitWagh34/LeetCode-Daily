// https://leetcode.com/problems/koko-eating-bananas/description/

#include <iostream>
#include <vector>
#include<math.h>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long CountTotalTime(vector<int>& piles, int speed) {
        long long totalTime = 0;

        for (long long p : piles) {
            totalTime += (p + speed - 1) / speed;
        }
        return totalTime;
    }
    int minEatingSpeed(vector<int>& piles, int hrs) {
        int small = 1;
        int large = *max_element(piles.begin(), piles.end());
      
        int ans = large;
        while (small <= large) {
            int mid = small + (large - small) / 2;
            long long totalH = CountTotalTime(piles, mid);
            if (totalH <= hrs) {
                ans = mid;
                large = mid - 1;
            } else {
                small = mid + 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;

    vector<int> arr = {3,6,7,11};
    int h = 8;

    cout << "Kth missing positive: " << sol.minEatingSpeed(arr, h) << endl;

    return 0;
}