class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start=0,end=nums.size()-1;
        while(start<end){
            int mid=start+(end-start)/2;
            if(mid==0 and nums[mid]>nums[mid+1])
                return mid;
            if(mid==nums.size()-1 and nums[mid]>nums[mid-1])
                return mid;
            if(nums[mid]>nums[mid+1] and nums[mid]>nums[mid-1])
                return mid;
            if(nums[mid]>=nums[mid+1]){
                end=mid;
            }
            else{
                start=mid+1;
            }
        }
        return start;
    }
};