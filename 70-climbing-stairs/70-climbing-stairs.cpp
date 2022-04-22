class Solution {
public://solution 1 top down (recursive dp)
    int dp[46]={0};
    int climbStairs(int n) {
        if(n==0)
            return 1;
        else if(n<0)
            return 0;
        if(dp[n]>0)
            return dp[n];
        return dp[n]=climbStairs(n-1)+climbStairs(n-2);
    }
};