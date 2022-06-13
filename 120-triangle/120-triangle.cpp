class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int dp[205][205] = {0};
        int s = triangle.size();
        dp[0][0] = triangle[0][0];
        for(int i=1;i<s;i++) {
            for(int j=0,len=triangle[i].size(); j<len; j++) {
                dp[i][j] = min(dp[i - 1][max(0, j - 1)], dp[i - 1][min(j, len - 2)]) + triangle[i][j];
            }
        }

        int ans = INT_MAX;
        for(int i = 0, k = triangle[s - 1].size(); i < k; ++i)
            ans = min(ans, dp[s - 1][i]);
        return ans;
    }
};