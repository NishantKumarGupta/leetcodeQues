class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size()/2;
        unordered_map<int,int> mp;
        for(auto x:nums){
            mp[x]++;
            if(mp[x]>n)
                return x;
        }
        return -1;
    }
};