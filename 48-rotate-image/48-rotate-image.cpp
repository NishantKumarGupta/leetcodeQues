class Solution {
public:// by observation we see that the resultant matrix is the reverse of the transpose of the first matrix so we will do just that
    void rotate(vector<vector<int>>& matrix) {
        int matSize = matrix.size();
        for(int i=0;i<matSize;i++){
            for(int j=0; j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0; i<matSize;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};