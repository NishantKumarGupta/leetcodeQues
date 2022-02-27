class Solution {
public://solution 1: memoization (top down) approach
    int dp[30005][2];
    int rec(vector<int> &prices,int itr,bool hold){
        if(itr>=prices.size())
            return 0;
        
        if(dp[itr][hold]>-1)
            return dp[itr][hold];
        
        if(hold){
                return dp[itr][hold]=max(
                rec(prices,itr+1,true),
                    prices[itr]+rec(prices,itr+1,false));
        }
        return dp[itr][hold]=max((rec(prices,itr+1,true)-prices[itr])
                                 ,rec(prices,itr+1,false));
    }
    int maxProfit(vector<int>& prices) {
        memset(dp,-1,sizeof(dp));
        return rec(prices,0,false);
    }
};