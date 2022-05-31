class Solution {
public://one way comes to mind after seeing the previous written solution that we sort the intervals according to their first value and consider all the 3 cases that can occur between two intervals
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        ans.push_back(intervals[0]);
        for(int i = 1; i<intervals.size();i++){
            vector<int> lastInterval = ans.back();
            if(intervals[i][1]<=lastInterval[1])
                continue;
            if(intervals[i][0]<= lastInterval[1]){
                intervals[i][0] = lastInterval[0];
                ans.pop_back();
            }
            ans.push_back(intervals[i]);
        }
        return ans;
    }
};