class Solution {
public:
    int recursion(vector<int> &nums, int n, vector<int> &dp){
        if(n == 0)
            return nums[0];
        if(n == 1)
            return max(nums[0], nums[1]);
        
        if(dp[n] > -1)
            return dp[n];
        
        return dp[n] = max(recursion(nums, n - 1, dp), nums[n] + recursion(nums, n - 2, dp));   
    }
    
    int rob(vector<int>& nums) {
        int numsLen = nums.size();
        vector<int> dp(numsLen + 1, -1);
        return recursion(nums, numsLen - 1, dp);
    }
};