class Solution {
public: //bfs
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int> visited(n,false);
         vector<vector<int>>adj(n);
        for(auto edge : edges){
               adj[edge[0]].push_back(edge[1]);
               adj[edge[1]].push_back(edge[0]);
           }
        queue<int> q;
        q.push(source);
        visited[source]=true;
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            for(auto x:adj[curr]){
                if(!visited[x]){
                    q.push(x);
                    visited[x]=true;
                }
            }
        }
        if(visited[destination])
            return true;
        return false;
    }
};