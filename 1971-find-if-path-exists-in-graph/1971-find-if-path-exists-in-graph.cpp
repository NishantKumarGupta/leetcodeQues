class Solution {
public: //dfs
    void dfs(vector<vector<int>> &adj,vector<int> &visited,int node){
        visited[node]=true;
        for(auto x:adj[node])
                if(!visited[x])
                    dfs(adj,visited,x);
    }
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        vector<int> visited(n,false);
        vector<vector<int>>adj(n);
        for(auto edge : edges){
               adj[edge[0]].push_back(edge[1]);
               adj[edge[1]].push_back(edge[0]);
           }
        dfs(adj,visited,start);
        if(visited[end])
            return true;
        return false;
    }
};