class Solution {
public:
    void solve(vector<vector<int>> &ans,vector<int> &ds,int target,int i,int n,vector<int> &c)
    {
        if(target==0)
        {
            ans.push_back(ds);
        }
        for(int j=i;j<n;j++)
        {
            if(i!=j&&c[j]==c[j-1])
            {
                continue;
            }
            if(target-c[j]<0)
            {
                continue;
            }
            ds.push_back(c[j]);
            target-=c[j];
            solve(ans,ds,target,j+1,n,c);
            target+=c[j];
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& c, int target) {
        vector<vector<int>> ans;
        int i=0,n=c.size();
        vector<int> ds;
        sort(c.begin(),c.end());
        solve(ans,ds,target,i,n,c);
        return ans;
    }
};