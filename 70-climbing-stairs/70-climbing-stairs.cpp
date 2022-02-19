class Solution {
public://solution 2 bottom up(tabulation) approach
    int dp[50]={0};
    int climbStairs(int n) {
        if(dp[n]>0)
            return dp[n];
        for(int i=0;i<=n;i++){
            if(i==0 || i==1){
                dp[i]=1;
                continue;
            }
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};