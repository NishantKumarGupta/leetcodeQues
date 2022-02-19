class Solution {
public://solution 2 bottom up(tabulation) approach
    int climbStairs(int n) {
        int dp[50];
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++)
            dp[i]=dp[i-1]+dp[i-2];
        return dp[n];
    }
};