class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int maxi=INT_MIN;
        for(auto x:nums)
            maxi=max(x,maxi);
        long long int start=1,end=maxi;
        while(start<end){
            int mid=start+(end-start)/2;
            long long int sum=0;
            for(auto x:nums)
                sum+=ceil((float)x/(float)mid);
            if(sum<=threshold)
                end=mid;
            else
                start=mid+1;
        }
        return end;
    }
};