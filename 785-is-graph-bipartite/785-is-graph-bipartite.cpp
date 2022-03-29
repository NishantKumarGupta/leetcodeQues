class Solution {
public: //dfs solution
    bool dfs(vector<vector<int>> &graph,vector<int> &colour,int node){
        if(colour[node]==-1)
            colour[node]=1;
        for(auto x:graph[node]){
            if(colour[x]==-1){
                colour[x]=1-colour[node];
                if(!dfs(graph,colour,x))
                    return false;
            }
            else if(colour[node]==colour[x]){
                return false;
            }
        }
        return true;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> colour(n,-1);
        for(int i=0;i<n;i++){
            if(colour[i]==-1){
                if(!dfs(graph,colour,i))
                    return false;
            }
        }
        return true;
    }
};