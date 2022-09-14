class Solution { //SFIP
public:
    int pickup(int i, int j1, int j2, vector<vector<vector<int>>> &dp, vector<vector<int>> &grid){
        if(j1 < 0 || j1 >= grid[0].size() || j2 < 0 || j2 >= grid[0].size()){
            return -1e8;
        }
        if(i  == grid.size() - 1){
            if(j1 == j2){
                return grid[i][j1];
            }
            else{
                return grid[i][j1] + grid[i][j2];
            }
        }
        if(dp[i][j1][j2] != -1) return dp[i][j1][j2];
        
        int maxCherry = 0;
        for(int dj1 = -1; dj1 < 2; dj1++){
            for(int dj2 = -1; dj2 < 2; dj2++){
                if(j1 == j2){
                    maxCherry = max(maxCherry, grid[i][j1] + pickup(i + 1, j1 + dj1, j2 + dj2, dp, grid));
                }
                else{
                    maxCherry = max(maxCherry, grid[i][j1] + grid[i][j2] + pickup(i + 1, j1 + dj1, j2 + dj2, dp, grid));
                }
            }
        }
        return dp[i][j1][j2] = maxCherry;
    }
    
    int cherryPickup(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<vector<int>>> dp(row, vector<vector<int>>(col, vector<int>(col, -1)));
        return pickup(0, 0, col - 1, dp, grid);
    }
};