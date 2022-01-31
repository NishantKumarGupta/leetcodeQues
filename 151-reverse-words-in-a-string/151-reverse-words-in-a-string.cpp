class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        stringstream st(s);
        string word;
        while(st>>word){
            if(!ans.empty())
                word+=' ';
            ans=word+ans;
        }
        return ans;
    }
};