class Solution {
public: // solution 1: recursive approach
    vector<vector<int>> generate(int numRows) {
        if(numRows==1)
            return {{1}};
        vector<vector<int>> ans=generate(numRows-1);
        vector<int> vec;
        vec.push_back(1);
        for(int i=1;i<ans[ans.size()-1].size();i++){
            vec.push_back(ans[ans.size()-1][i-1]+ans[ans.size()-1][i]);
        }
        vec.push_back(1);
        ans.push_back(vec);
        return ans;
    }
};