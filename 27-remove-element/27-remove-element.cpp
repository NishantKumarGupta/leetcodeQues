class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                k++;
                continue;
            }
            else{
                nums[i-k]=nums[i];
            }
        }
        return nums.size()-k;
    }
};