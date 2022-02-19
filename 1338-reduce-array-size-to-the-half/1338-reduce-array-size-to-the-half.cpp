class Solution {
public:
    static bool cmp(const pair<int,int> &a, const pair<int,int> &b){
        return a.second>b.second;
    }
    
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(auto x:arr)
            mp[x]++;
        vector<pair<int,int>> vec;
        for(auto x:mp){
            vec.push_back(x);
        }
        sort(vec.begin(),vec.end(),cmp);
        int ans=0,freq=0;
        for(auto x:vec){
            freq+=x.second;
            ans++;
            if(freq>=arr.size()/2)
                return ans;
        }
        return arr.size();
    }
};