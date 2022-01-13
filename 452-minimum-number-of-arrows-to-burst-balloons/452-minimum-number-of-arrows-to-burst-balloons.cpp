bool l(vector<int>&a, vector<int>&b){
    if(a[0] == b[0]) return a[1] < b[1];
    return a[0] < b[0];
}

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        
        sort(points.begin(), points.end(), l);
        int ans = 0;
        int ptr = -1;
        bool isO = true;
        
        for(int i=0;i<points.size();i++){
            if(!isO){
                if(points[i][0] <= points[ptr][1]){
                    if(points[i][1] < points[ptr][1]) ptr = i;
                }
                else isO = true;
            }
            if(isO){
                ans++;
                ptr = i;
                isO = false;
            }
        }
        
        return ans;
        
    }
};