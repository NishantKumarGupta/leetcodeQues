class Solution {
public:
    int maxCoins(vector<int>& nums) {
        int n=nums.size();
        if(n==0)    return 0;
        int dp[505][505]={0};
        for(int i=0;i<n;i++){
            for(int j=0;j+i<n;j++){
                int pos=i+j;
                for(int k=j;k<=pos;k++){
                    int leftNum=j==0?1:nums[j-1];
                    int rightNum= pos==n-1?1:nums[pos+1];
                    
                    int left=k==j?0:dp[j][k-1];
                    int right= k==pos?0:dp[k+1][pos];
                    
                    dp[j][pos]=max(dp[j][pos],leftNum*nums[k]*rightNum+left+right);
                }
            }
        }
        return dp[0][n-1];
    }
};