class Solution {
public: //dfs
    bool dfs(vector<vector<int>>&adj,vector<int> &visited,vector<int>&dfsVisit,int node){
        visited[node]=true;
        dfsVisit[node]=true;
        for(auto x:adj[node]){
            if(!visited[x]){
                if(dfs(adj,visited,dfsVisit,x))
                    return true;
            }
            else if(dfsVisit[x])
                return true;
        }
            dfsVisit[node]=false;
            return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        for(auto edge:prerequisites)
            adj[edge[0]].push_back(edge[1]);
        vector<int> visited(numCourses,false),dfsVisit(numCourses,false);
        for(int i=0;i<numCourses;i++){
            if(!visited[i])
                if(dfs(adj,visited,dfsVisit,i))
                    return false;
        }
        return true;
    }
};