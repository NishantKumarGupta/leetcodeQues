class Solution {
public: // solution 1: bottom up(iterative/tabulation) approach
    int minCostClimbingStairs(vector<int>& cost) {
        int dp[1005]={0};
        int n=cost.size();
        dp[0]=cost[0];
        dp[1]=cost[1];
        for(int i=2;i<n;i++){
            dp[i]=cost[i]+(min(dp[i-1],dp[i-2]));
        }
        return min(dp[n-1],dp[n-2]);
    }
};