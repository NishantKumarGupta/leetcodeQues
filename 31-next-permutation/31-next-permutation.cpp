class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int swapper = -1;
        int vecSize = nums.size()-1;
        for(int i = vecSize-1; i >= 0; i--){
            if(nums[i]<nums[i+1]){
                swapper = i;
                break;
            }
        }
        if(swapper < 0)
            reverse(nums.begin(),nums.end());
        else{
        for(int i= vecSize ; i> swapper ;i--){
            if(nums[i]>nums[swapper]){
                swap(nums[swapper],nums[i]);
                break;
            }
        }
        reverse(nums.begin()+swapper + 1,nums.end());
        }
    }
};