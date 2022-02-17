class Solution {
public:
    vector<vector<int>> ans;
    void rec(vector<int> &candidates,int target,vector<int> curr,int itr){
        //base case
        if(target==0){
            ans.push_back(curr);
            return;
        }
        if(itr>=candidates.size() || target<0)
            return;
        
        //rec cases
        if(candidates[itr]<=target){
            rec(candidates,target,curr,itr+1);
            curr.push_back(candidates[itr]);
            rec(candidates,target-candidates[itr],curr,itr);
            rec(candidates,target-candidates[itr],curr,itr+1);
        }
        else
            return;
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        ans.clear();
        sort(candidates.begin(),candidates.end());
        rec(candidates,target,{},0);
        set<vector<int>> s( ans.begin(), ans.end() );
        ans.assign( s.begin(), s.end() );
        return ans;
    }
};