class Solution {
public:// solution 1: memoization apporach
    int dp[10005];
    bool rec(vector<int>&nums,int itr){
        if(itr>=nums.size()-1)
            return true;
        if(dp[itr]!=-1)
            return dp[itr];
        for(int i=1;i<=nums[itr];i++)
            if(rec(nums,itr+i))
                return dp[itr]=true;
        return dp[itr]=false;
    }
    bool canJump(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return rec(nums,0);
    }
};