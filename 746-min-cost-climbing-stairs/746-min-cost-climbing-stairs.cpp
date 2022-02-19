class Solution {
public: // solution 1: memoization(top down) approach
    int dp[1005]={0};
    int rec(vector<int> &cost,int itr){
        //base case
        if(itr>=cost.size())
            return 0;
        //dp case
        if(dp[itr]>0)
            return dp[itr];
        //rec cases
        return dp[itr]=cost[itr]+min(rec(cost,itr+1),rec(cost,itr+2));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        return min(rec(cost,0),rec(cost,1));
    }
};