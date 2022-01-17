class Solution {
public:
    bool wordPattern(string pattern, string s) 
    {
        map<char,string>mp;
        map<string,char>mpTwo;
        vector<string>vec;
        string temp="";
        stringstream ss(s);
        while(ss>>temp)
            vec.push_back(temp);
        
        if(pattern.length()!=vec.size())
            return false;
        
        for(int i=0;i<pattern.length();i++){
            if(mp.find(pattern[i])==mp.end())
                mp[pattern[i]]=vec[i];
            else if(mp[pattern[i]]!=vec[i])
                return false;
        }
        for(int i=0;i<vec.size();i++){
            if(mpTwo.find(vec[i])==mpTwo.end())
                mpTwo[vec[i]]=pattern[i];
            else if(mpTwo[vec[i]]!=pattern[i])
                return false;
        }
        return true;
    }
};