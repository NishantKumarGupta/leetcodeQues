class Solution {
public:
    bool is_palindrome(string &s,int l, int r){
        while(l<=r){
            if(s[l]!=s[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
    
    int countSubstrings(string s) {
        int ans=0;
        int n = s.length();
        for(int i=0;i<n;i++){
            int start=0, end= start+i;
            while(end<n){
                if(is_palindrome(s,start,end))
                    ans++;
                start++;
                end++;
            }
        }
        return ans;
    }
};