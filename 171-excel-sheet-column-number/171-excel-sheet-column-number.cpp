class Solution {
public: //without reversing
    int titleToNumber(string columnTitle) {
        int ans=0,n=columnTitle.length();
        for(int i=0;i<n;i++){
            ans+=((columnTitle[i]-64)*pow(26,n-i-1));
        }
        return ans;
    }
};