class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> temp=nums;
        sort(temp.begin(),temp.end());
        int start=0,end=nums.size()-1;
        while(start<nums.size()){
            if(temp[start]==nums[start])
                start++;
            else
                break;
        }
        while(end>=0){
            if(temp[end]==nums[end])
                end--;
            else
                break;
        }
        if(start>end)
            return 0;
        else
            return (end-start+1);
    }
};