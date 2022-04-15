class Solution {
public: //isko karenge hum BFS se ,nai hua isse DFS se karke dekhte
        //gaandu ques hai DFS me chalra BFS me TLE dera
        //retrying BFS
    
        bool isValid(vector<vector<char>> &grid,int i,int j){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size())
            return false;
        return true;
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    ans++;
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    while(!q.empty()){
                        int x=q.front().first;
                        int y=q.front().second;
                        q.pop();
                        grid[x][y]='0';
                        if(isValid(grid,x+1,y) and grid[x+1][y]=='1')
                            q.push({x+1,y}),grid[x+1][y]='0';
                        if(isValid(grid,x-1,y) and grid[x-1][y]=='1')
                            q.push({x-1,y}),grid[x-1][y]='0';
                        if(isValid(grid,x,y-1) and grid[x][y-1]=='1')
                            q.push({x,y-1}),grid[x][y-1]='0';
                        if(isValid(grid,x,y+1) and grid[x][y+1]=='1')
                            q.push({x,y+1}),grid[x][y+1]='0';
                    }
                }
            }
        }
        return ans;
    }
};