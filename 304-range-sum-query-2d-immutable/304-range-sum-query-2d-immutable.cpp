class NumMatrix {
public:
    vector<vector<int>> presum;
    NumMatrix(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        presum=vector<vector<int>>(n+1,vector<int>(m+1)); 
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                presum[i][j]=matrix[i-1][j-1]+presum[i][j-1]+presum[i-1][j]-presum[i-1][j-1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return presum[row2+1][col2+1]-presum[row1][col2+1]-presum[row2+1][col1]+presum[row1][col1];
    }
};