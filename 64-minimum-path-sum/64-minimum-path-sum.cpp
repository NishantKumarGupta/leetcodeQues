//SFIP
class Solution {
public:
//     int minPath(vector<vector<int>> &grid, int m, int n, vector<vector<int>> &dp){
//         if(m == 0 and n == 0)
//             return grid[m][n];
        
//         if(dp[m][n] != -1) return dp[m][n];
        
//         int goLeft = INT_MAX, goUp = INT_MAX;
        
//         if(m > 0){
//             goUp = minPath(grid, m - 1, n, dp);
//         }
//         if(n > 0){
//             goLeft = minPath(grid, m, n - 1, dp);
//         }
        
//         return dp[m][n] = grid[m][n] + min(goUp, goLeft);
//     }
    
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int> prevRow(n, -1);
        
        for(int i = 0; i < m; i++){
            vector<int> currRow(n, -1);
            for(int j = 0; j < n; j++){
                if(i == 0 && j == 0){
                    currRow[j] = grid[i][j];
                }
                else{
                    int goRight = INT_MAX, goDown = INT_MAX;
                    if(i > 0){
                        goDown = prevRow[j];
                    }
                    if(j > 0){
                        goRight = currRow[j - 1];
                    }
                    currRow[j] = grid[i][j] + min(goDown, goRight);
                }
            }
            prevRow = currRow;
        }
        return prevRow[n - 1];
    }
};