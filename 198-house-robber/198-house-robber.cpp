class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)
            return nums[0];
        int secondPrev = nums[0], prev = max(nums[1], nums[0]);  
        
        for(int i = 2; i < n; i++){
            int curr = max(nums[i] + secondPrev, prev);
            secondPrev = prev;
            prev = curr;
        }
        
        return prev;
    }
};