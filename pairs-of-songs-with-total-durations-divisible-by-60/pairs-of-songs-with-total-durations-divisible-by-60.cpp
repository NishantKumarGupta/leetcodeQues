class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int ans=0;
        unordered_map<int,int> mp;
        for(auto &x:time){
            x%=60;
        }
        for(auto x:time){
            if(mp[60-x]>0){
                ans+=mp[60-x];
            }
            mp[x]++;
        }
        if(mp[0]>1){
            ans+=((mp[0]*(mp[0]-1))/2);
        }
        return ans;
    }
};