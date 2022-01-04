class Solution { //Approach 1: memoization and recursive calls
public:
    int dp[20001][201];
    bool rec(vector<int> &nums,int sum,int n){
        //base cases
        if(!sum) return true;
        if(!n)  return false;
        //dp check
        if(dp[sum][n]!=-1)  return dp[sum][n];
        //rec cases
        if(nums[n-1]<=sum){
            return dp[sum][n]=(rec(nums,sum-nums[n-1],n-1)) || (rec(nums,sum,n-1));
        }
        else
            return dp[sum][n]=(rec(nums,sum,n-1));
    }
    
    bool canPartition(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        //first of all we have have to find out if the sum of the array is even
        //or not because odd sum array can never return two equal sum subsets
        int sum=0;
        for(auto x:nums)    sum+=x;
        if(sum%2!=0)    return false;
        return rec(nums,sum/2,nums.size());
    }
    
};