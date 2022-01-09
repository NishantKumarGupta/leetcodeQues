class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix[0].size()+1;
        for(int i=0;i<matrix.size();i++){
            vector<bool> mat(n,false);
            vector<bool> matTwo(n,false);
            for(int j=0;j<matrix[i].size();j++){
                mat[matrix[i][j]]=true;
                matTwo[matrix[j][i]]=true;
            }
            for(int i=1;i<=matrix[0].size();i++){
                if(!mat[i])
                    return false;
            }
            for(int i=1;i<=matrix[0].size();i++){
                if(!matTwo[i])
                    return false;
            }
        }
        return true;
    }
};