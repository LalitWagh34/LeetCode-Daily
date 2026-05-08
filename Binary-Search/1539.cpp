// https://leetcode.com/problems/kth-missing-positive-number/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low = 0;
        int high = arr.size() - 1;

        while (low <= high) {
            int mid = (low + high) / 2;
            int missing = arr[mid] - (mid + 1);

            if (missing < k) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return low + k;
    }
};

int main() {
    Solution sol;

    vector<int> arr = {2, 3, 4, 7, 11};
    int k = 5;

    cout << "Kth missing positive: " << sol.findKthPositive(arr, k) << endl;

    return 0;
}