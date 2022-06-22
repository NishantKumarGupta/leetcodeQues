class Solution {
public:
    
    int recursion(string &s, int low, int high, vector<vector<int>> &dp){
        //base case
        if(low > high)
            return 0;
        if(low == high)
            return 1;
        
        //dp case
        if(dp[low][high] > -1)
            return dp[low][high];
        
        if(s[low] == s[high])
            return dp[low][high] = 2 + recursion(s, low + 1, high - 1, dp);
        else
            return dp[low][high] = max(recursion(s, low + 1, high, dp), recursion(s, low, high - 1, dp));
    }
    
    int longestPalindromeSubseq(string s) {
        int stringLen = s.length();
        vector<vector<int>> dp(stringLen, vector<int>(stringLen, -1));
        return recursion(s, 0, stringLen - 1, dp);
    }
};