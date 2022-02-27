class Solution {
public://solution 1: memoization (top down) approach
    int dp[5005][2][2];
    int rec(vector<int> &prices,int itr,bool hold,bool cooldown){
        if(itr>=prices.size())
            return 0;
        
        if(dp[itr][hold][cooldown]>-1)
            return dp[itr][hold][cooldown];
        if(cooldown)
            return rec(prices,itr+1,hold,false);
        if(hold){
            return dp[itr][hold][cooldown]=max((rec(prices,itr+1,false,true)+prices[itr])
                      ,rec(prices,itr+1,true,false));
        }
        return dp[itr][hold][cooldown]=max((rec(prices,itr+1,true,false)-prices[itr])
                  ,rec(prices,itr+1,false,false));
    }
    
    
    int maxProfit(vector<int>& prices) {
        memset(dp,-1,sizeof(dp));
        return rec(prices,0,false,false);
    }
};