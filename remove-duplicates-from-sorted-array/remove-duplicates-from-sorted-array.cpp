class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int itr=0;
        if(nums.size()==0){
            nums.clear();
            return 0;
        }
        
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[itr])  continue;
            else{
                nums[itr+1]=nums[i];
                itr++;
            }
        }
        return itr+1;
    }
};