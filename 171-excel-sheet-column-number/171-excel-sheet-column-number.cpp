class Solution {
public: //without reversing
    int titleToNumber(string columnTitle) {
        int ans=0;
        for(int i=0;i<columnTitle.length();i++){
            ans+=((columnTitle[i]-64)*pow(26,columnTitle.length()-i-1));
        }
        return ans;
    }
};