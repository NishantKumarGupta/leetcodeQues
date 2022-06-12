class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
         int ans=0;
        unordered_map<int,int>m;
        int p=0,q=0;
        int temp=0;
        while(q<nums.size()){
            if(m[nums[q]]==0){
                temp+=nums[q];
                m[nums[q]]++;
                q++;
            }
            else{
                ans=max(ans,temp);
                temp-=nums[p];
                m[nums[p]]--;
                p++;
            }
        }
        ans=max(ans,temp);
        return ans;
    }
};