class Solution {
public:
    int findLCS(string &word1, string &word2, int m, int n, vector<vector<int>> &dp){
        if(m < 0 || n < 0)
            return 0;
        
        if(dp[m][n] > -1)
            return dp[m][n];
        
        if(word1[m] == word2[n])
            return dp[m][n] = 1 + findLCS(word1, word2, m-1, n-1, dp);
        
        else
            return dp[m][n] = max(findLCS(word1, word2, m-1, n, dp), findLCS(word1, word2, m, n-1, dp));
    }
    
    int minDistance(string word1, string word2) {
        int m = word1.length();
        int n = word2.length();
        vector<vector<int>> dp(501 , vector<int>(501,-1));
        int common = findLCS(word1, word2, m-1, n-1, dp);
        int ans = (m - common) + (n - common);
        return ans;
    }
};