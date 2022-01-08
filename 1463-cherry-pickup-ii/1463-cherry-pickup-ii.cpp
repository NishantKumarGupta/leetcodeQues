class Solution {
public:
    int dp[70][70][70] = {};
    int newColOne[3]={-1,0,1};
    int newColTwo[3]={-1,0,1};
    int cherryPickup(vector<vector<int>>& grid) {
        memset(dp, -1, sizeof(dp));
        int m = grid.size(), n = grid[0].size();
        return rec(grid, m, n, 0, 0, n - 1);
    }
    int rec(vector<vector<int>>& grid, int m, int n, int r, int c1, int c2) {
        if (r == m) return 0;
        if (dp[r][c1][c2] != -1) return dp[r][c1][c2];
        int cherries = 0;
        if(c1==c2) cherries = grid[r][c1];
        else cherries = grid[r][c1]+grid[r][c2];

        int next = 0;
        for (int i = 0; i <=2; i++) {
            for (int j = 0; j <= 2; j++) { 
                int nc1 = c1 + newColOne[i], nc2 = c2 + newColTwo[j];
                if (nc1 >= 0 && nc1 < n && nc2 >= 0 && nc2 < n) {
                    next = max(next, rec(grid, m, n, r + 1, nc1, nc2));
                }
            }
        }

        return dp[r][c1][c2] = next + cherries;
    }
};