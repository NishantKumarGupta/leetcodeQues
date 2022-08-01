class Solution {
public:
    int minSum(vector<vector<int>> &grid, int i, int j, vector<vector<int>> &dp){
        if(i >= grid.size() || j >= grid[0].size()){
            return 4000001;
        }
        if(i == (int)grid.size() - 1 && j == (int)grid[0].size() - 1)
            return grid[i][j];
        
        if(dp[i][j] > -1)
            return dp[i][j];
        
        return dp[i][j] = grid[i][j] + min(minSum(grid, i + 1, j, dp), minSum(grid, i, j + 1, dp));
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>> dp(201, vector<int>(201, -1));
        return minSum(grid, 0, 0, dp);
    }
};