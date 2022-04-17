class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target)
                return mid;
            //the left part is sorted
            if(nums[mid]>=nums[start]){
                //it either lies of left part or not
                if(target>=nums[start] and nums[mid]>=target)
                    end=mid-1;
                else
                    start=mid+1;
            }
            //the right part is sorted
            else{
                //it either lies on right part or not
                if(target>=nums[mid] and target<=nums[end])
                    start=mid+1;
                else
                    end=mid-1;
            }
        }
        return -1;
    }
};