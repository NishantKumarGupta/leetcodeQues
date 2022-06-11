class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
            sum+=nums[i];
        
        sum=sum-x;
        if(sum==0)
            return nums.size();
    
        else if(sum<0)
            return -1;
        
        int j=0;
        int sum2=0;
        int len=INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum2+=nums[i];
            while(sum2>sum && j<nums.size()){
                sum2-=nums[j++];
            }
            if(sum2==sum){
                len=max(len,i-j+1);
            }
        }
        if(len==INT_MIN)
            return -1;
        
        return nums.size()-len;
    }
};