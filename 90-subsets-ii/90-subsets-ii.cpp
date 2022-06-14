class Solution {
public:
     void solve(vector<int> &nums,vector<vector<int>> &ans,vector<int> &v,int i,int n)
    {
        ans.push_back(v);
        for(int j=i;j<n;j++)
        {
            if(j!=i&&nums[j]==nums[j-1])
                continue;
            v.push_back(nums[j]);
            solve(nums,ans,v,j+1,n);
            v.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> v;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        solve(nums,ans,v,0,n);
        return ans;
    }
};