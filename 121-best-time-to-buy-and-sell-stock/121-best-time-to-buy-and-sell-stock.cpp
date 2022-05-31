class Solution {
public:
    //for this 3 solutions come into mind. The first one being that we calculate a postfix sum array and store the next heighest number and for a single pass loop find the maximum difference
    // The other one is a DP solution where we recursively travel the array and find out the maximum difference and use memoization for improving the time complexity
    // The third one is the simple greedy method TC O(n) SC O(1)
    
    //writing the greedy solution first
    int maxProfit(vector<int>& prices) {
        int minVal = INT_MAX, maxVal = INT_MIN, ans =0;
        for(auto &element: prices){
            if(element>maxVal){
                maxVal = element;
            }
            if(element < minVal){
                minVal = element;
                maxVal = 0;
            }
            ans = max(ans, maxVal-minVal);
        }
        return ans;
    }
};