class Solution {
public: //SFI
    /*
        Method 1: DP recursive (Brute Force approach)
        We simply move to either right or down and consider this as our starting position
        and try to reach the goal position and return it to solve the bigger problem
        and apply DP.
        TC - O(n*m) SC - O(n*m) + O(n * m)
        
        Method 2: DP iterative TC - O(n * m) SC - O(n*m)
        
        Method 3: Using combinatrics
        When we observe the paths we find out 2 key observations
        1. All unique paths have same length
        2. All paths have same number of right and down steps
        So basically we just calculate the number of rights or downs using combinatrics
        TC - O(m) or O(n) SC - O(1)
    */
    
    //DP approach
//     int numPaths(int m, int n, vector<vector<int>> &dp){
//         if(m < 0 || n < 0)
//             return 0;
//         if(m == 0 && n == 0)
//             return 1;
        
//         if(dp[m][n] != -1) return dp[m][n];
        
//         int goLeft = numPaths(m, n - 1, dp);
//         int goUp = numPaths(m - 1, n, dp);
        
//         return dp[m][n] = goLeft + goUp;
//     }
    
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, -1));
        dp[0][0] = 1;
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(i == 0 && j == 0) continue;
                    int goRight = 0, goDown = 0;
                    if(i > 0){
                        goDown = dp[i - 1][j];
                    }
                    if(j > 0){
                        goRight = dp[i][j - 1];
                    }
                    dp[i][j] = goDown + goRight;
                
            }
        }
        return dp[m - 1][n - 1];
    }
};