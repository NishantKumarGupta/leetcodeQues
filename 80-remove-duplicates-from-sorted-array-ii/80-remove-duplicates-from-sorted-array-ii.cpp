class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        
        if(n<3)
            return n;
        map<int,int>mp;
        
        for(auto x: nums)
            mp[x]++;
        
        int i=0;
        for(auto x:mp){
            if(x.second>=2){
                nums[i]=x.first;
                nums[i+1]=x.first;
                i+=2;
            }
            else{
                nums[i]=x.first;
                i++;
            }
        }
        return i;      
    }
};