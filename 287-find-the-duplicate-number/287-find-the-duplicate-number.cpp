class Solution {
public: //one way pop into mind The first one being a binary search using count
    // but we will do this in single pass loop so we use tortoise method(floyd's method)
    //using the floyd's method
    int findDuplicate(vector<int>& nums) {
        int slow=nums[0],fast=nums[0];
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow!=fast);
        fast = nums[0];
        while(fast!=slow){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};