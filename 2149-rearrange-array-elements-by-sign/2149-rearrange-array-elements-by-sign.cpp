class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos,neg,ans;
        for(auto x:nums){
            if(x<0)
                neg.push_back(x);
            else
                pos.push_back(x);
        }
        for(int i=0;i<nums.size();i++){
            if(i%2==0)
                ans.push_back(pos[i/2]);
            
            else
                ans.push_back(neg[i/2]);
        }
        return ans;    
    }
};