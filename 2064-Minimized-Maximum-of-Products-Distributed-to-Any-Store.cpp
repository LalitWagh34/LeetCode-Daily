class Solution {
public:
    bool canDistribute(vector<int>& piles, int maxPerStore, int n) {
        long long totalStores = 0;
        for (int p : piles) {
            totalStores += (p + maxPerStore - 1) / maxPerStore;
            if (totalStores > n) return false; 
        }
        return true;
    }

    int minimizedMaximum(int n, vector<int>& arr) {
        int small = 1;
        int large = *max_element(arr.begin(), arr.end());
        int ans = large;

        while (small <= large) {
            int mid = small + (large - small) / 2;
            if (canDistribute(arr, mid, n)) {
                ans = mid;
                large = mid - 1;
            } else {
                small = mid + 1;
            }
        }
        return ans;
    }
};