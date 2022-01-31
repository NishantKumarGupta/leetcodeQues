class Solution {
public:
    string reverseWords(string s) {
        string ans="",word;
        stringstream st(s);
        while(st>>word){
            if(!ans.empty())
                word+=' ';
            ans=word+ans;
        }
        return ans;
    }
};