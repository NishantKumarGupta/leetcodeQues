class Solution {
public:
    vector<vector<int>> ans;
    
    void rec(vector<int> &nums,int itr,vector<int> curr){
        if(itr>=nums.size()){
            ans.push_back(curr);
            return;
        }
        rec(nums,itr+1,curr);
        curr.push_back(nums[itr]);
        rec(nums,itr+1,curr);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        ans.clear();
        rec(nums,0,{});
        return ans;
    }
};