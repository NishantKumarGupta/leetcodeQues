class Solution {
public://solution 1 top down (recursive dp)
       //solution 2 bottom up (tabulation dp)
        // space optimization
    
    int dp[46] = {0};
    int climbStairs(int n) {
        if(n == 0 || n == 1)
            return 1;
        if(dp[n] > 0)
            return dp[n];
        
        return dp[n] = climbStairs(n - 1) + climbStairs(n - 2);
    }
};

/*











*/