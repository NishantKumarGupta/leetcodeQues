class Solution {
public: //with reversing
    int titleToNumber(string columnTitle) {
        int ans=0;
        reverse(columnTitle.begin(),columnTitle.end());
        for(int i=0;i<columnTitle.length();i++){
            ans+=((columnTitle[i]-64)*pow(26,i));
        }
        return ans;
    }
};