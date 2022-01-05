class Solution {
public:
    vector<vector<string>> ans;
    vector<vector<bool>> dp;
    vector<vector<string>> partition(string s) {
        vector<string> path;
        Palindrome(s);
        dfs(0,path,s);
        return ans;
    }
    void dfs(int itr,vector<string>& path,string& s){
        if(itr>=s.size()){
            ans.push_back(path);return;
        }
        for(int i=itr;i<s.size();i++){
            if(dp[itr][i]){
                string curr=s.substr(itr,i-itr+1);
                path.push_back(curr);
                dfs(i+1,path,s);
                path.pop_back();
            }
        }
    }
    void Palindrome(string& s){
        int n=s.size();
        dp.resize(n,vector<bool>(n,0));
        for(int i=0;i<n;i++) dp[i][i]=1;
        for(int len=2;len<=n;len++){
            for(int i=0;i<=n-len;i++){
                int j=i+len-1;
                if(len==2 && s[i]==s[j]) dp[i][j]=1;
                else if(dp[i+1][j-1]==1 && s[i]==s[j]) dp[i][j]=1;
            }
        }
    }
};