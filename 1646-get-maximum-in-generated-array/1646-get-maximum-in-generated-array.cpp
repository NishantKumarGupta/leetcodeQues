class Solution {
public:
    void rec(int n,int itr,vector<int> &ans){
        if(itr>n)
            return;
        if(itr%2==0 and itr>=2){
            ans.push_back(ans[itr/2]);
        }
        else
            ans.push_back((ans[itr/2]+ans[(itr/2)+1]));
        rec(n,itr+1,ans);
    }
    int getMaximumGenerated(int n) {
        int count=INT_MIN;
        vector<int> ans;
        ans.push_back(0);
        ans.push_back(1);
        rec(n,2,ans);
        if(n<2)
            return ans[n];
        sort(ans.begin(),ans.end());
        return ans[ans.size()-1];
    }
};