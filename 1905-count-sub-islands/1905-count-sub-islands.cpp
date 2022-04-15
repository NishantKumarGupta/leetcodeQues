class Solution {
public: //lets do this with DFS first as its most trustworthy
        //DFS done bc bahut ez
    bool DFS(vector<vector<int>> &grid1,vector<vector<int>> &grid2,int i,int j){
        if(i<0 || i>=grid1.size() || j<0 || j>=grid1[0].size())
            return true;
        if(!grid1[i][j] && grid2[i][j])
            return false;
        if(!grid2[i][j])
            return true;
        grid2[i][j]=0;
        return (DFS(grid1,grid2,i+1,j) & DFS(grid1,grid2,i-1,j) & DFS(grid1,grid2,i,j+1) & DFS(grid1,grid2,i,j-1));
    }
    
    
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int m=grid2.size();
        int n=grid2[0].size();
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid2[i][j] and DFS(grid1,grid2,i,j))
                    ans++;
            }
        }
        return ans;
    }
};