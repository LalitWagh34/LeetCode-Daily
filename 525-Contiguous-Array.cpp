class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int maxlen =0 , sum =0 ;
        unordered_map<int, int> seen{{0, -1}};
        int n = nums.size();
        for(int i=0 ;i<n;i++){
            sum += nums[i] == 1?1:-1;\
            if(seen.count(sum)) maxlen = max(maxlen , i-seen[sum]);
            else seen[sum] =i;
        }
        return maxlen;
    }
};