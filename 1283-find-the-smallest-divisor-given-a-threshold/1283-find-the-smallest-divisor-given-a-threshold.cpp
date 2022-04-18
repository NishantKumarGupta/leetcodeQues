class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        long long int n=nums.size();
        long long int arrSum=0;
        for(auto x:nums)
            arrSum+=x;
        long long int start=1,end=arrSum;
        while(start<end){
            long long int mid=start+(end-start)/2;
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