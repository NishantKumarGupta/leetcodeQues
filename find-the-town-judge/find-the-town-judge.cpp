class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1) return 1; 
        vector<vector<int>> gra(n+1);

        for(auto x : trust)
            gra[x[0]].push_back(x[1]);
        
        int ans =0;	
        for(int i=1;i<n+1;i++){
            if(gra[i].size() == 0){
                if(ans==0){
                    ans = i;
                }else{
                    return -1;
                }
            }
        }
       for(int i=1;i<n+1;i++){
            if(i == ans) continue;
            else{
                if(find(gra[i].begin(),gra[i].end(),ans) == gra[i].end()){
                    return -1;
                }
            }
        }

        return ans;

    }
};