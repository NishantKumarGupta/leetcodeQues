class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        vector<int> forward;
        vector<int> backward;
        int count=100000,ans=0;
        for(auto x:seats){
            if(x)
                count=0;
            else
                count++;
            forward.push_back(count);
        }
        count=100000;
        for(int i=seats.size()-1;i>=0;i--){
            if(seats[i])
                count=0;
            else
                count++;
            backward.push_back(count);
        }
        reverse(backward.begin(),backward.end());
        for(int i=0;i<seats.size();i++){
            if(forward[i]){
                ans=max(ans,min(forward[i],backward[i]));
            }
        }
        return ans;
    }
};
//approach used: (next greatest element)