class Solution {
public:
    int hIndex(vector<int>& citations) {
        int start=0,end=citations.size()-1;
        int n=end,ans=0;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(citations[mid]>=(n-mid)+1){
                ans=(n-mid)+1;
                end=mid-1;
            }
            else
                start=mid+1;
        }
        return ans;
    }
};