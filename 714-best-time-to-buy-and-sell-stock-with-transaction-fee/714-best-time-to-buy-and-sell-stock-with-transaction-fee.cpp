class Solution {
public://solution 1:memoization (top down) approach
    int dp[50005][2];
    int rec(vector<int> &prices,int itr,bool hold,int fee){
        if(itr>=prices.size())
            return 0;
        if(dp[itr][hold]>-1)
            return dp[itr][hold];
        if(hold){
            return dp[itr][hold]=max((rec(prices,itr+1,false,fee)+prices[itr]-fee),rec(prices,itr+1,true,fee));
        }
        return dp[itr][hold]=max((rec(prices,itr+1,true,fee)-prices[itr]),rec(prices,itr+1,false,fee));
    }
    int maxProfit(vector<int>& prices, int fee) {
        memset(dp,-1,sizeof(dp));
        return rec(prices,0,false,fee);
    }
};