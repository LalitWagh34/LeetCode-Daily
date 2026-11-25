class Solution {
public:
    int maxLength(vector<int>& nums) {
        int res = 0;
        for (int i = 0; i < nums.size(); i++) {
            long long prod = nums[i];
            long long gcdVal = nums[i];
            long long lcmVal = nums[i];
            for (int j = i + 1; j < nums.size(); j++) {
                prod = prod * nums[j];
                gcdVal = gcd(gcdVal, nums[j]);
                lcmVal = lcm(lcmVal, nums[j]);
                if (prod > gcdVal * lcmVal) {
                    break;
                }
                if (prod == gcdVal * lcmVal) {
                    res = max(res, j - i + 1);
                }
            }
        }

        return res;
    }
};