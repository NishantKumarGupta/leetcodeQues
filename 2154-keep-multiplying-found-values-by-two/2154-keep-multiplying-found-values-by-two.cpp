class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(),nums.end());
        while(1){
            int start=0,end=nums.size()-1;
            while(start<=end){
                int mid=start+(end-start)/2;
                if(nums[mid]==original)
                    break;
                else if(nums[mid]<original)
                    start=mid+1;
                else
                    end=mid-1;
            }
            if(start>end)
                break;
            else
                original*=2;
        }
        return original;
    }
};