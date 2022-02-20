class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        stack<vector<int>> st;
        st.push(intervals[0]);
        for(int i=1;i<intervals.size();i++){
            vector<int>vec=st.top();
            if(intervals[i][1]<=vec[1])
                continue;
            if(intervals[i][0]==vec[0] && intervals[i][1]>vec[1])
                st.pop();
            st.push(intervals[i]);
        }
        return st.size();
    }
};