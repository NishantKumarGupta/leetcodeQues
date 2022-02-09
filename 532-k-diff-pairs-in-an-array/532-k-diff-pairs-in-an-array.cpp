class Solution {
public:
    unordered_map<int,int> mp;
    set<pair<int,int>> st;
    int findPairs(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=0; i < n; i++){
            mp[nums[i]]++;
        }
        for(int i=0;i < n; i++){
            mp[nums[i]]--;
            if(mp[nums[i]]==0) mp.erase(nums[i]);
            
            if(mp.find(-k+nums[i])!=mp.end() && st.find({nums[i], nums[i]-k}) == st.end()){
                if(st.find({nums[i], nums[i]-k}) == st.end()){
                    st.insert({nums[i]-k, nums[i]});
                }
            }
            if(mp.find(k+nums[i])!=mp.end() && st.find({nums[i], nums[i]+k}) == st.end()){
                if(st.find({nums[i]+k, nums[i]}) == st.end()){
                
                    st.insert({nums[i], nums[i]+k});
                    
                }
            }
            mp[nums[i]]++;
        }

        return st.size();
    }
};