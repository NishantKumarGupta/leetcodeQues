class Solution {
public://solution 1 top down (recursive dp)
       //solution 2 bottom up (tabulation dp)
        // space optimization
    
    int climbStairsHelper(int n, vector<int> &dp){
        if(n == 0 || n == 1) return 1;
        
        if(dp[n] != -1) return dp[n];
        
        return dp[n] = climbStairsHelper(n - 1, dp) + climbStairsHelper(n - 2, dp);
    }
    
    int climbStairs(int n) {
        vector<int> dp(n + 1, -1);
        return climbStairsHelper(n, dp);
    }
};