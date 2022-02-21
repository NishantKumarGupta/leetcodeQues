class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        multiset<int> st;
        for(int i=0;i<k;i++)
            st.insert(nums[i]);
        vector<int> ans;
        ans.push_back(*(--st.end()));
        for(int i=1;i+k<=nums.size();i++){
            st.erase(st.find(nums[i-1]));
            st.insert(nums[i+k-1]);
            ans.push_back(*(--st.end()));
        }
        return ans;
    }
};