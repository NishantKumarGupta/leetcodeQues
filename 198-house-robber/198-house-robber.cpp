class Solution {
public:
    int rob(vector<int>& nums) {
        int numsLen = nums.size();
        if(numsLen == 1)
            return nums[0];
        
        vector<int> dp(numsLen + 1, -1);
        int secondLast = nums[0];
        int last = max(nums[1], nums[0]);
        int curr = last;
        for(int i = 2; i < numsLen; i++){
            curr = max(last, nums[i] + secondLast);
            secondLast = last;
            last = curr;
        }
        return curr;
    }
};