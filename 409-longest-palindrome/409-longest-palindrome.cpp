class Solution {
public:
    int longestPalindrome(string s) {
        int flag=0,ans=0;
        unordered_map<char,int> mp;
        for(auto c:s)
            mp[c]++;
        for(auto x:mp){
            ans+=(x.second/2);
            if(x.second&1)
                flag=1;
        }
        ans*=2;
        ans+=flag;
        return ans;
    }
};