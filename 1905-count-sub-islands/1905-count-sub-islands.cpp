class Solution {
public: //lets do this with DFS first as its most trustworthy
        //DFS done bc bahut ez
        //trying BFS
        //BFS bhi done tera bhai OP hai yaar
    
    bool isValid(vector<vector<int>> &grid1,int i,int j){
        if(i<0 || i>=grid1.size() || j<0 || j>=grid1[0].size())
            return false;
        return true;
    }
    
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int m=grid2.size();
        int n=grid2[0].size();
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid2[i][j] and grid1[i][j]){
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    bool flag=true;
                    while(!q.empty()){
                        int x=q.front().first;
                        int y=q.front().second;
                        q.pop();
                        if(!grid1[x][y])
                            flag=false;
                        grid2[x][y]=0;
                        if(isValid(grid1,x+1,y) and grid2[x+1][y])
                            q.push({x+1,y}),grid2[x+1][y]=0;
                        if(isValid(grid1,x-1,y) and grid2[x-1][y])
                            q.push({x-1,y}),grid2[x-1][y]=0;
                        if(isValid(grid1,x,y+1) and grid2[x][y+1])
                            q.push({x,y+1}),grid2[x][y+1]=0;
                        if(isValid(grid1,x,y-1) and grid2[x][y-1])
                            q.push({x,y-1}),grid2[x][y-1]=0;
                    }
                    if(flag)
                        ans++;
                }
                    
            }
        }
        return ans;
    }
};