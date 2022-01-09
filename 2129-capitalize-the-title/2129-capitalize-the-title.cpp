class Solution {
public:
    string capitalizeTitle(string title) {
        string temp="",ans="";
        for(auto c:title){
            if(c==' '){
                for(auto &x:temp)
                    x=tolower(x);
                if(temp.length()>2)
                    temp[0]=toupper(temp[0]);
                temp+=' ';
                ans+=temp;
                temp="";
            }
            else
                temp+=c;
        }
        for(auto &x:temp)
            x=tolower(x);
        if(temp.length()>2)
            temp[0]=toupper(temp[0]);
        ans+=temp;
        return ans;
    }
};