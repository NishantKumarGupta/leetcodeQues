class Solution {
public:
    //simple kadane's algo
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN;
        int currSum = 0;
        for(auto &element:nums){
            currSum += element;
            ans = max(ans,currSum);
            if(currSum<0)
                currSum = 0;
        }
        return ans;
    }
};