class Solution {
public://ao chalo kare ise DFS se, then karenge BFS se
    bool DFS(vector<vector<int>> &grid,int i,int j){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size())
            return false;
        
        if(grid[i][j])
            return true;
        
        grid[i][j]=1;
        
        return (DFS(grid,i+1,j) & DFS(grid,i-1,j) & DFS(grid,i,j+1) & DFS(grid,i,j-1));
    }
    
    int closedIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!grid[i][j] and DFS(grid,i,j))
                    ans++;
            }
        }
        return ans;
    }
};