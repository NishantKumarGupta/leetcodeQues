class Solution { //SFIP
public:
//      Method 1: DP recursive (Brute Force approach)
//         We simply move to either right or down and consider this as our starting position
//         and try to reach the goal position and return it to solve the bigger problem
//         and apply DP.
//         TC - O(n*m) SC - O(n*m) (for dp vector) + O((n - 1) + (m - 1)) (path length)
        
//         Method 2: DP iterative TC - O(n * m) SC - O(n * m)
    
    
    int uniquePaths(int m, int n, vector<vector<int>>& obstacleGrid, vector<vector<int>> &dp){
        if(m < 0 || n < 0 || obstacleGrid[m][n] == 1)
            return 0;
        if(m == 0 && n == 0)
            return 1;
   
        if(dp[m][n] != -1) return dp[m][n];
        
        int goUp = uniquePaths(m - 1, n, obstacleGrid, dp);
        int goLeft = uniquePaths(m, n - 1, obstacleGrid, dp);
        
        return dp[m][n] = goUp + goLeft;
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>> dp(m, vector<int> (n, -1));
        return uniquePaths(m - 1, n - 1, obstacleGrid, dp);
    }
};