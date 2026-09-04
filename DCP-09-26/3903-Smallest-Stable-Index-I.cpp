class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int maxi = INT_MIN;
        int mini = INT_MAX;

        int n = nums.size();
        if(n == 1 && nums[0] - nums[0]<=k) return 0; 


        for(int i=0 ;i<n ;i++){
            maxi= max(nums[i] , maxi);
            mini = INT_MAX;
            for(int j=i ;j<n;j++){
                mini = min(nums[j] , mini);
            }
            if(maxi - mini <= k) return  i;

        }

        return -1;
    }
};