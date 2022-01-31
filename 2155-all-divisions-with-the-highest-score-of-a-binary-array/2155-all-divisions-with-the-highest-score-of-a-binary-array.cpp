class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
        vector<int> left,right,ans;
        int temp=0,ttemp=0,maxx=INT_MIN;
        for(int i=0;i<nums.size();i++){
            left.push_back(temp);
            if(!nums[i])
                temp++;
            else
                ttemp++;
        }
        left.push_back(temp);
        for(int i=0;i<nums.size();i++){
            right.push_back(ttemp);
            if(nums[i])
                ttemp--;
        }
        right.push_back(0);
        for(int i=0;i<=nums.size();i++){
            if(left[i]+right[i]>maxx){
                maxx=left[i]+right[i];
                ans.clear();
                ans.push_back(i);
            }
            else if(left[i]+right[i]==maxx)
                ans.push_back(i);
        }
        return ans;
    }
};