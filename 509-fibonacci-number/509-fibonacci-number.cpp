class Solution {
public:// dp sol 2 bottom up(tabulation) method
    int dp[35]={0};
    int fib(int n) {
        if(dp[n]>0)
            return dp[n];
        for(int i=0;i<=n;i++){
            if(i==1 || i==0){
                dp[i]=i;
                continue;
            }
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};