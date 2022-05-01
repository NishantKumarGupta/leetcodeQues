class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string a="",b="";
        for(auto c:s){
            if(c=='#'){
                if(a.length()>0)
                    a.erase(a.length()-1);
            }
            else
                a+=c;
        }
        for(auto c:t){
            if(c=='#'){
                if(b.length()>0)
                    b.erase(b.length()-1);
            }
            else
                b+=c;
        }
        return a==b;
    }
};