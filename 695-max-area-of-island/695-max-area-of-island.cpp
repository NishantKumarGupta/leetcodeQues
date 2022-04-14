class Solution {
public://isko hum pehle karenge BFS se then DFS se
        //BFS done ez boi
    
    int DFS(vector<vector<int>> &grid,int i,int j){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || !grid[i][j])
            return 0;
        grid[i][j]=0;
        return (1+ DFS(grid,i+1,j)+ DFS(grid,i-1,j) + DFS(grid,i,j+1)+ DFS(grid,i,j-1));
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]){
                    ans=max(ans,DFS(grid,i,j));
                }
            }
        }
        return ans;
    }
};