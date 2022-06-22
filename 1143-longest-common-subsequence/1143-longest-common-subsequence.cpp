class Solution {
public:
    int rec(string &text1, string &text2, int text1Itr, int text2Itr, vector<vector<int>> &dp){
        //base case
        if(text1Itr == text1.length() || text2Itr == text2.length())
            return 0;
        
        //dp case
        if(dp[text1Itr][text2Itr] > -1)
            return dp[text1Itr][text2Itr];
        
        if(text1[text1Itr] == text2[text2Itr])
            return dp[text1Itr][text2Itr] = 1 + rec(text1, text2, text1Itr + 1, text2Itr + 1, dp);
        
        else
            return dp[text1Itr][text2Itr] = max(rec(text1, text2, text1Itr + 1, text2Itr, dp),
                                               rec(text1, text2, text1Itr, text2Itr + 1, dp));
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        int text1Len = text1.length(), text2Len = text2.length();
        vector<vector<int>> dp(text1Len + 1, vector<int>(text2Len + 1, -1));
        return rec(text1, text2, 0, 0, dp);
    }
};