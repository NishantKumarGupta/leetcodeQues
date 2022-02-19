class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        set<int> st;
        for(auto x:nums){
            if(x&1)
                st.insert(x*2);
            else
            st.insert(x);
        }
        int ans=*st.rbegin()-*st.begin();
        while(*st.rbegin()%2==0){
            if(*st.rbegin()%2==0){
                int temp=*st.rbegin();
                st.erase(temp);
                st.insert(temp/2);
            }
            ans=min(ans,(*st.rbegin()-*st.begin()));
        }
        return ans;
    }
};