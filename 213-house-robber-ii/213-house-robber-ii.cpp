class Solution {
public:
    int robTheHouse(vector<int>& nums) {
        int numsLen = nums.size();
        if(numsLen == 1)
            return nums[0];
        
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
    
    int rob(vector<int>& nums) {
        if(nums.size() == 1)
            return nums[0];
        vector<int> temp1, temp2;
        for(int i = 0; i < nums.size(); i++){
            if(i != 0)  temp1.push_back(nums[i]);
            if(i != nums.size() - 1) temp2.push_back(nums[i]);
        }
        return max(robTheHouse(temp1), robTheHouse(temp2));
    }
};