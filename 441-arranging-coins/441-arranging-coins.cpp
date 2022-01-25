class Solution {
public:
    int arrangeCoins(int n) {
        long long start=1,end=n;
        long long ans=-1;
        while(start<=end){
            long long mid=start+(end-start)/2;
            long long temp=(mid*(2+(mid-1)))/2;
            if(temp==n)
                return mid;
            else if(temp<n){
                ans=mid;
                start=mid+1;
            }
            else
                end=mid-1;
        }
        return ans;
    }
};