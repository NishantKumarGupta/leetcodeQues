class Solution {
public://solution 1 top down (recursive dp)
       //solution 2 bottom up (tabulation dp)
        // space optimization
    
    int climbStairs(int n) {
        vector<int> dp(46, -1);
        dp[0] = 1, dp[1] = 1;
        for(int i = 2; i <= n; i++){
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }
};