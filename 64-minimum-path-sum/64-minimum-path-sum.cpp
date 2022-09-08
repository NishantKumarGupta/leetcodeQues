//SFIP
class Solution {
public:
    int minPath(vector<vector<int>> &grid, int m, int n, vector<vector<int>> &dp){
        if(m == 0 and n == 0)
            return grid[m][n];
        
        if(dp[m][n] != -1) return dp[m][n];
        
        int goLeft = INT_MAX, goUp = INT_MAX;
        
        if(m > 0){
            goUp = minPath(grid, m - 1, n, dp);
        }
        if(n > 0){
            goLeft = minPath(grid, m, n - 1, dp);
        }
        
        return dp[m][n] = grid[m][n] + min(goUp, goLeft);
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return minPath(grid, m - 1, n - 1, dp);
    }
};