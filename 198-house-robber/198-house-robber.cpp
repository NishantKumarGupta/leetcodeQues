class Solution {
public:
    
    int robHouse(vector<int> &nums, int n, vector<int> &dp){
        if(n < 0) return 0;
        if(n == 0)  return nums[n];
        
        if(dp[n] != -1) return dp[n];
        
        int pickHouse = nums[n] + robHouse(nums, n - 2, dp);
        int notPickHouse = robHouse(nums, n - 1, dp);
        
        return dp[n] = max(pickHouse, notPickHouse);
    }
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        return robHouse(nums, n - 1, dp);    
    }
};