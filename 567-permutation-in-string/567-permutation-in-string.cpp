class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> v1(26,0);
        vector<int> v2(26,0);
        if(s1.length()>s2.length())
            return false;
        
        int start=0,end=0;
        while(end<s1.length()){
            v1[s1[end]-'a']++;
            v2[s2[end]-'a']++;
            end++;
        }
        if(v1==v2)
            return true;
        while(end<s2.length()){
            v2[s2[start]-'a']--;
            v2[s2[end]-'a']++;
            start++;
            end++;
            if(v1==v2)
                return true;
        }
        return false;
    }
};