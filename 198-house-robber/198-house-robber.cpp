class Solution {
public://solution 1: memoization(top down) approach
    int dp[105];
    int rec(vector<int>&nums,int itr){
        //base case
        if(itr>=nums.size())
            return 0;
        if(dp[itr]>-1)
            return dp[itr];
        //rec calls
        return dp[itr]=max(rec(nums,itr+1),nums[itr]+rec(nums,itr+2));
    }
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return rec(nums,0);
    }
};