class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int> st;
        for(auto x:nums)
            st.insert(x);
        while(1){
            if(st.find(original)==st.end())
                break;
            else
                original*=2;
        }
        return original;
    }
};