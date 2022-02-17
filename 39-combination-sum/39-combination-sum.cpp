class Solution {
public:
    set<vector<int>> ansSet;
    void rec(vector<int> &candidates,int target,vector<int> curr,int itr){
        //base case
        if(target==0){
            ansSet.insert(curr);
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
        else{
            return;
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        ansSet.clear();
        vector<int> curr;
        sort(candidates.begin(),candidates.end());
        rec(candidates,target,curr,0);
        vector<vector<int>> ans;
        for(auto x:ansSet)
            ans.push_back(x);
        return ans;
    }
};