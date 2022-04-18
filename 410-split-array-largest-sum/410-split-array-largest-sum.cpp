class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        int maxi=INT_MIN,arrSum=0;
        for(auto x:nums){
            maxi=max(x,maxi);
            arrSum+=x;
        }
        int start=maxi,end=arrSum;
        while(start<end){
            int mid=start+(end-start)/2;
            int sum=0,count=1;
            for(auto x:nums){
                if(sum+x<=mid){
                    sum+=x;
                    continue;
                }
                else{
                    sum=x;
                    count++;
                }
            }
            if(count<=m)
                end=mid;
            else
                start=mid+1;
        }
        return end;
    }
};