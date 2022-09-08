class Solution { //SFIP
public:
//     int minPath(vector<vector<int>> &triangle, int row, int col, vector<vector<int>> &dp){
//         if(row == triangle.size() - 1)
//             return triangle[row][col];
        
//         if(dp[row][col] != INT_MIN) return dp[row][col];
        
//         int goDownRight = minPath(triangle, row + 1, col + 1, dp);
//         int goDown = minPath(triangle, row + 1, col, dp);
        
//         return dp[row][col] = triangle[row][col] + min(goDown, goDownRight);
//     }
    
    int minimumTotal(vector<vector<int>>& triangle) {
        int m = triangle.size();
        int n = triangle[m - 1].size();
        vector<vector<int>> dp(m, vector<int>(n, INT_MAX));
        for(int i = 0; i < m; i++){
            for(int j = 0; j < triangle[i].size(); j++){
                if(i == 0 and j == 0){
                    dp[i][j] = triangle[i][j];
                }
                else{
                    int goUp = dp[i - 1][j];
                    int goUpLeft = INT_MAX;
                    if(j != 0){
                        goUpLeft = dp[i - 1][j - 1];
                    }
                    dp[i][j] = triangle[i][j] + min(goUp, goUpLeft);
                }
            }
        }
        int ans = INT_MAX;
        for(int i = 0; i < triangle[m - 1].size(); i++){
            ans = min(dp[m - 1][i], ans);
        }
        return ans;
    }
};