class Solution {
public: //one way pop into mind The first one being a binary search using count
    
    //using the binary search method
    int findDuplicate(vector<int>& nums) {
        int start = 0, end=nums.size()-1;
        while(start<=end){
            int mid = start+(end-start)/2;
            int count=0;
            for(auto &element: nums){
                if(element<=mid)
                    count++;
            }
            if(count<=mid){
                start = mid+1;
            }
            else
                end = mid-1;
        }
        return start;
    }
};