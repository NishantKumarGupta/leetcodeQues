class Solution {
public: //isko karenge hum BFS se ,nai hua isse DFS se karke dekhte
    
    void rec(vector<vector<char>> &grid,int i,int j){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j] =='0')
            return;
        grid[i][j]='0';
        rec(grid,i+1,j);
        rec(grid,i-1,j);
        rec(grid,i,j+1);
        rec(grid,i,j-1);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();

        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    ans++;
                    rec(grid,i,j);
                }
            }
        }
        return ans;
    }
};