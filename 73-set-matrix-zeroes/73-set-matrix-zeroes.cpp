class Solution {
public:
//     so for the brute force approach we can run a loop 
//     for the entirity of the matrix and change the ones on encounter of zero
        
//     for the simple improvement we can use a set to store the row and column
//     to be changed
//     O(m+n)
        
    //O(m+n) solution
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> row;
        set<int> column;
        int rowNum = matrix.size();
        int colNum = matrix[0].size();
        for(int i=0;i < rowNum; ++i){
            for(int j = 0; j < colNum; j++){
                if(matrix[i][j] == 0){
                    row.insert(i);
                    column.insert(j);
                }
            }
        }
        for(auto element:row){
            for(int i = 0; i<colNum;i++)
                matrix[element][i] = 0;
        }
        for(auto element:column){
            for(int i = 0; i < rowNum; i++)
                matrix[i][element] = 0;
        }
    }
};