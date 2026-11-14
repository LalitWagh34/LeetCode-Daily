class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int mini = INT_MAX;

        for(int i=0 ;i<n;i++){
            int currSum = 0;
            for(int j=i ;j<n;j++){
                currSum += nums[j];
                int len = j-i+1;
                if(len > r){
                    break;
                }
                if(len >= l && currSum > 0){
                    mini = min(currSum , mini);
                }
            }
        }

        return (mini == INT_MAX)? -1: mini ;
    }
};