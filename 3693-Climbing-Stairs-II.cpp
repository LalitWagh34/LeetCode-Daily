class Solution {
public:
    int solve(int i , vector<int>&costs , vector<int>&dp ){
        int n = costs.size();

        if(i>= n-1){
            return 0;
        }

        if(dp[i+1] != -1){
            return dp[i+1];
        }

        int mini = 1e9;

        for(int j= i+1 ;j<= min(i+3 ,n-1) ;j++){
            mini = min(mini , (j-i) * (j-i) + costs[j]+ solve(j , costs, dp));
        }

        return dp[i+1] =mini ;
    }
    int climbStairs(int n, vector<int>& costs) {
        vector<int>dp(n+2 , -1);

        return solve(-1 , costs ,dp);
    }
};