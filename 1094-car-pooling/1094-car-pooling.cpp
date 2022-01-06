class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int pass[1001]={0};
        for(auto x:trips){
            if(x[0]>capacity)
                return false;
            else{
                for(int i=x[1];i<x[2];i++){
                    pass[i]+=x[0];
                    if(pass[i]>capacity)
                        return false;
                }
            }
        }
        return true;
    }
};