class Solution {
public:
    int minDeletions(string s) {
        map<char,int> mp;
        for(auto c:s)
            mp[c]++;
        set<int> st;
        int ans = 0;
        for(auto x:mp){
            if(st.find(x.second) != st.end()){
                while(st.find(x.second) != st.end() & x.second > 0){
                    x.second --;
                    ans++;
                }
            }
            st.insert(x.second);
        }
        return ans;
    }
};