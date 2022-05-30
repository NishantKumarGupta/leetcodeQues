class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows == 1)
            return {{1}};
        vector<vector<int>> ans = generate(numRows - 1);
        vector<int> tempVec;
        tempVec.push_back(1);
        int lastRow = numRows - 2;
        for(int i=1; i<ans[lastRow].size();i++){
            tempVec.push_back(ans[lastRow][i]+ans[lastRow][i-1]);
        }
        tempVec.push_back(1);
        ans.push_back(tempVec);
        return ans;
    }
};