class Solution {
public:
    bool detectCapitalUse(string word) {
        int up=0;
        for(auto c:word){
            if(isupper(c))
                up++;
        }
        if(up==word.length() or up==0 or (up==1 and isupper(word[0])))
            return true;
        return false;
    }
};