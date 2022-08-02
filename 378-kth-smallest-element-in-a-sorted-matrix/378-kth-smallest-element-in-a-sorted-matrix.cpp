class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int,vector<int>, greater<int>> pq;
        for(auto row: matrix){
            for(auto val: row){
                pq.push(val);
            }
        }
        while(k != 1){
            pq.pop();
            k--;
        }
        return pq.top();
    }
};