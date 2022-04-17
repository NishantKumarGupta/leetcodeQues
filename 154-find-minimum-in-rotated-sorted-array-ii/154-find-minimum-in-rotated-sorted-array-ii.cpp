class Solution {
public: //agar ye maine pehle try me kardia to mai god
    int findMin(vector<int>& nums) {
        int start=0,end=nums.size()-1;
        while(start<end){
            int mid=start+((end-start)/2);
            if(nums[mid]<nums[end])
                end=mid;
            else if(nums[mid]>nums[end])
                start=start+1;
            else
                end--;
        }
        return nums[end];
    }
};