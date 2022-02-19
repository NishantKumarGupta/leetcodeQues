class Solution {
public:// solution 1: memoization solution
    int dp[10005];
    int rec(vector<int> &nums,int itr){
        if(itr>=nums.size()-1)
            return 0;
        // if(nums[itr]==0)
        //     return 100000;
        if(dp[itr]!=-1)
            return dp[itr];
        int ans=100000;
        for(int i=1;i<=nums[itr];i++){
            ans=min(ans,1+rec(nums,itr+i));
        }
        return dp[itr]=ans;
    }
    int jump(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return rec(nums,0);
    }
};