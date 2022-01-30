class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> ans(nums.size());
        int left = 0, right = nums.size() - 1;
        for(int i = k%nums.size()-1;i>=0;i--){
            ans[i] = nums[right--]; 
        }
        for(int j=k%nums.size();j<=nums.size()-1; j++){
            ans[j]=nums[left++];
        }
    nums=ans;
    }
};