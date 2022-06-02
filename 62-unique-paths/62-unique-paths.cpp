class Solution {
public: //SFI
    /*
        Method 1: DP
        We simply move to either right or down and consider this as our starting position
        and try to reach the goal position and return it to solve the bigger problem
        and apply DP.
    */
    
    //DP approach
    int numPaths(int posRow, int posCol, int m, int n, vector<vector<int>> &dp){
        if(posRow> m || posCol > n)
            return 0;
        if(posRow == m and posCol == n)
            return 1;
        
        if(dp[posRow][posCol]>-1)
            return dp[posRow][posCol];
        
        int right = numPaths(posRow, posCol+1, m, n,dp);
        int down = numPaths(posRow+1, posCol, m, n,dp);
        return dp[posRow][posCol] = right + down;
    }
    
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m+2, vector<int>(n+2,-1));
        return numPaths(1,1,m,n,dp);
    }
};