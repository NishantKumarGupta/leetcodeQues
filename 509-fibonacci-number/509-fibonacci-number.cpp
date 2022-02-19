class Solution {
public:// dp sol 1 memoization method
    int dp[35]={0};
    int fib(int n) {
        //base case
        if(n==1 || n==0)
            return n;
        //dp case
        if(dp[n]>0)
            return dp[n];
        //rec cases
        return fib(n-1)+fib(n-2);
    }
};