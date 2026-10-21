class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int total = 0;

        for(auto x:nums){
            total += x;
        }

        int left=0;
        int count=0;
        for(int i=0;i<nums.size()-1 ;i++){
            left += nums[i];

            int right = total - left;
            if((left -right) %2 == 0) {
                count++;
            }
        }
        return count;
    }
};