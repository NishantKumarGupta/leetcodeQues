class Solution {
public:// solution 2: iterative apporach
    bool canJump(vector<int>& nums) {
        vector<bool> dp(nums.size(),false);
        dp[nums.size()-1]=true;
        for(int i=nums.size()-2;i>=0;i--){
            for(int j=1;j<=nums[i] && j+i<nums.size();j++){
                if(dp[j+i]){
                    dp[i]=true;
                    break;
                }
            }
        }
        return dp[0];
    }
};