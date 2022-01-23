class Solution {
public:
    int countElements(vector<int>& nums) {
        int ans=0,minn=INT_MAX,maxx=INT_MIN;
        for(auto x:nums){
            minn=min(minn,x);
            maxx=max(maxx,x);
        }
        for(auto x:nums)
            if(x>minn and x<maxx)
                ans++;
        
        return ans;
    }
};