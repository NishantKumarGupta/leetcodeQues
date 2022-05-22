class Solution {
public:
    int minDeletion(vector<int>& nums) {
        stack<int> st;
        for(auto x:nums){
            if(st.size()%2!=0){
                if(x!=st.top())
                    st.push(x);
                continue;
            }
            else{
                st.push(x);
            }
        }
        if(st.size()%2!=0)
            st.pop();
        return nums.size() - st.size();
    }
};