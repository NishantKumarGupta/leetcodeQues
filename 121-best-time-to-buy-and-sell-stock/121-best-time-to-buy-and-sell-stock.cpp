class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0,maxx=0,minn=INT_MAX;
        for(int i=0;i<prices.size();i++){
            if(prices[i]>=maxx)
                maxx=prices[i];
            if(prices[i]<=minn){
                minn=prices[i];
                maxx=0;
            }
            ans=max(ans,(maxx-minn));
        } 
        return ans;
    }
};