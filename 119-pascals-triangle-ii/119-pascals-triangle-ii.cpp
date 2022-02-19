class Solution {
public: // solution 1: recursive approach
    vector<int> getRow(int rowIndex) {
        if(rowIndex==0)
            return {1};
        vector<int> prev=getRow(rowIndex-1);
        vector<int> ans;
        ans.push_back(1);
        for(int i=1;i<prev.size();i++)
            ans.push_back(prev[i-1]+prev[i]);
        ans.push_back(1);
        return ans;
    }
};