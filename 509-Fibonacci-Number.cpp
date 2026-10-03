class Solution {
public:
   /*
    int fib(int n) {
         if(n <= 1) return n;

         int prev2 =1 ;// fib(n-1)
         int prev1 =0;//fib(n-2)

         for(int i=2 ;i<= n ;i++){
            int curr = prev2 +prev1;

            prev1 = prev2 ;
            prev2 = curr;
        }
        return prev2;

    } 
    */

    int solve(int n , vector<int>&dp){
        if(n<2)return n;

        if(dp[n] != -1)
            return dp[n];
        int ans1 = solve( n-1,dp);
        int ans2 = solve( n-2,dp);

        return dp[n] =ans1 +ans2;
    }



    int fib(int n){
        vector<int>dp(n+1 ,-1);
        return solve(n ,dp);
    }
};