class Solution { //First method- sorting & two pointers
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        if(nums.size()<=2)
            return ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            if(i>0 and nums[i]==nums[i-1])
                continue;
            int j=i+1,k=nums.size()-1;
            int temp=nums[i];
            temp*=-1;
            while(j<k){
                if(j>i+1 and nums[j]==nums[j-1]){
                    j++;
                    continue;
                }
                if(nums[j]+nums[k]==temp){ 
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    continue;
                }
                else if(nums[j]+nums[k]<temp)
                    j++;
                else
                    k--;
            }
        }
        return ans;
    }
};