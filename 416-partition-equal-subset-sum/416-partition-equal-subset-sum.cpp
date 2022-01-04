class Solution {    //Approach 2: iterative
public:
    bool dp[20001][201];
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(auto x:nums)    sum+=x;
        if(sum%2!=0)    return false;
        sum/=2;
        for(int i=0;i<=sum;i++){
            for(int j=0;j<=nums.size();j++)
                dp[i][j]=0;
        }
        for(int i=0;i<=nums.size();i++) dp[0][i]=true;
        for(int i=1;i<=sum;i++){
            for(int j=1;j<=nums.size();j++){
                if(nums[j-1]<=i){
                    dp[i][j]=(dp[i-nums[j-1]][j-1]) || (dp[i][j-1]);
                }
                else
                    dp[i][j]=dp[i][j-1];
            }
        }
        // for(int i=0;i<=sum;i++){
        //     for(int j=0;j<=nums.size();j++){
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        // cout<<endl<<endl;
        return dp[sum][nums.size()];
    }
};