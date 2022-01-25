class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        long long start=0,end=arr.size()-1;
        while(start<=end){
            long long mid=start+(end-start)/2;
            if(mid > 0 and arr[mid]>arr[mid-1] and 
               mid<arr.size()-1 and arr[mid]>arr[mid+1])
                return mid;
            else if(mid<arr.size()-1 and arr[mid+1]>arr[mid])
                start=mid+1;
            else
                end=mid-1;
        }
        return -1;   
    }
};