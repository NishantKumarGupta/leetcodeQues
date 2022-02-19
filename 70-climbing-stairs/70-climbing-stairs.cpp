class Solution {
public://solution 1 memoization(top down) approach
    int dp[50]={0};
    int climbStairs(int n) {
        //base case
        if(n==0)
            return 1;
        if(n<0)
            return 0;
        //dp case
        if(dp[n]>0)
            return dp[n];
        //rec calls
        return dp[n]=climbStairs(n-1)+climbStairs(n-2);
    }
};