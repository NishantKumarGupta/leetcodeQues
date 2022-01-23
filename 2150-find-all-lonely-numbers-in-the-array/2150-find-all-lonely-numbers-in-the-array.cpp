class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> ans;
        for(auto x:nums)
            mp[x]++;
        for(auto x:mp){
            if(x.second==1){
                if(mp.find(x.first-1)==mp.end() and mp.find(x.first+1)==mp.end())
                    ans.push_back(x.first);
            }
        }
        return ans;
    }
};