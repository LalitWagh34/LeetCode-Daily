class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int totalSum = 0;
        
        for(int x:nums){
            totalSum += x;
        }

        if(totalSum %2 != 0)
            return false;
        
        int targetSum = totalSum/2;

        vector<int>dp(targetSum+1 , false );
        // 0 1 2 3 4 5 6 7 8 9 10 11 
        // t f f f f f f f f f f  f
        dp[0] = true;

        for(int n :nums){
            for(int currSize  = targetSum ;currSize>= n ;currSize--){
                dp[currSize] = dp[currSize] || dp[currSize - n];

                if(dp[targetSum]) return true; 
            }
        }

        return dp[targetSum];
    }
};