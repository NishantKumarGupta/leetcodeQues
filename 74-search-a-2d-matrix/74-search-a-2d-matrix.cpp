class Solution {
public: //SFI
    /*
        Method 1: Brute force approach
        We simply traverse the whole matrix from top to bottom either row by row or column
        by column and compare each of the values in the matrix to our target value
        Tc - O(n*m) SC- O(1)
        
        Method 2: Binary Search approach
        We will binary search for the target value and search the element that is just
        smaller than the target element and after finding that we will binary search 
        for the target variable in that row.
        Tc- O(logm*logn) SC - O(1)
    */
    
    //Method 2 implementation
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start=0,end = (int)matrix.size()-1,rowNum=-1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(matrix[mid][0]<target){
                rowNum=max(rowNum,mid);
                start = mid+1;
                continue;
            }
            else if(matrix[mid][0]>target){
                end = mid-1;
                continue;
            }           
            else{
                return true;
            }
        }
        
        if(rowNum == -1)
            return false;
        
        start = 0, end = (int)matrix[0].size()-1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(matrix[rowNum][mid]==target)
                return true;
            if(matrix[rowNum][mid] > target){
                end = mid-1;
                continue;
            }
            else{
                start = mid+1;
            }
        }
        return false;
    }
};