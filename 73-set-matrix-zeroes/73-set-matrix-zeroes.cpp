class Solution {
public:
//     so for the brute force approach we can run a loop 
//     for the entirity of the matrix and change the ones on encounter of zero
        
//     for the simple improvement we can use a set to store the row and column
//     to be changed
//     O(m+n)
    
    // for the constant space solution we use the first row and column( 0 index) to check if that row or column contains a zero
        
    //O(1) solution
    void setZeroes(vector<vector<int>>& matrix) {
        bool rowZero = false, colZero = false;
        //first we run a loop through the first row and column to check for zero
        int rowNum = matrix.size();
        int colNum = matrix[0].size();
        for(int i = 0;i < rowNum; i++){
            if(matrix[i][0] == 0){
                colZero = true;
                break;
            }
        }
        for(int i =0; i<colNum; i++){
            if(matrix[0][i] == 0){
                rowZero = true;
                break;
            }
        }
        for(int i = 1;i < rowNum; i++){
            for(int j = 1; j < colNum; j++){
                // if the element is zero we will mark the first col and row as a zero indicator
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        for(int i = 1; i < rowNum; i++){
            if(matrix[i][0] == 0){
                for(int j = 1;j < colNum; j++)
                    matrix[i][j] = 0;
            }
            if(colZero)
                matrix[i][0] = 0;
        }
        for(int j = 1; j< colNum; j++){
            if(matrix[0][j] == 0){
                for(int i = 1; i< rowNum;i++)
                    matrix[i][j] = 0;
            }
            if(rowZero)
                matrix[0][j]=0;
        }
        if(rowZero || colZero)
            matrix[0][0] =0;
    }
};