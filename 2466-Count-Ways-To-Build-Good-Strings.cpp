class Solution {
public:
    int MOD =1e9 +7;
    int solve(int len ,int low, int high, int zero, int one ,vector<int>&dp){
        if (len > high) return 0;
        
        if(dp[len] != -1) return dp[len];

        int count = (len >= low) ? 1:0;

        count = (count + solve(len+zero , low , high ,zero ,one ,dp))%MOD;
        count =( count + solve(len + one , low ,high ,zero , one ,dp))%MOD;

        return dp[len] = count;

    }
    int countGoodStrings(int low, int high, int zero, int one) {
        vector<int>dp(high +1 , -1);
        // dp[0] =1;

        return solve(0 ,low ,high ,zero ,one ,dp);

       


    }
};