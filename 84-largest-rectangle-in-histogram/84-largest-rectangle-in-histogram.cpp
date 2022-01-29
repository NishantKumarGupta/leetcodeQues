class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int ans = 0, curr = 0, n = heights.size();
        stack<int> st;
        for(int i=0;i<n;i++){
            while(st.empty() == false && heights[st.top()]>=heights[i]){
                int top = st.top();
                st.pop();
                if(st.empty())
                    curr = heights[top]*i;
                else
                    curr = heights[top]*(i-st.top()-1);
                ans = max(curr,ans);
            }
            st.push(i);
        }
        while(st.empty() == false){
                int top = st.top();
                st.pop();
                if(st.empty())
                    curr = heights[top]*n;
                else
                    curr = heights[top]*(n-st.top()-1);
                ans = max(curr,ans);
            }
        return ans;
    }
};