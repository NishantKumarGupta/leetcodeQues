class Solution {
public:
    //DFS done ez
    //trying BFS
    //BFS done super ez boi
    bool isValid(vector<vector<int>> &grid,int i,int j){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size())
            return false;
        return true;
    }
    
    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]){
                    if(!i or !j or i==m-1 or j==n-1){
                        queue<pair<int,int>> q;
                        q.push({i,j});
                        while(!q.empty()){
                            int x=q.front().first;
                            int y=q.front().second;
                            q.pop();
                            grid[x][y]=0;
                            if(isValid(grid,x+1,y) and grid[x+1][y])
                                q.push({x+1,y}),grid[x+1][y]=0;
                            if(isValid(grid,x-1,y) and grid[x-1][y])
                                q.push({x-1,y}),grid[x-1][y]=0;
                            if(isValid(grid,x,y+1) and grid[x][y+1])
                                q.push({x,y+1}),grid[x][y+1]=0;
                            if(isValid(grid,x,y-1) and grid[x][y-1])
                                q.push({x,y-1}),grid[x][y-1]=0;
                        }
                    }
                }
            }
        }
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j])
                    ans++;
            }
        }
        return ans;
    }
};