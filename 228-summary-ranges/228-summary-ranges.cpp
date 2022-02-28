class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if(nums.size()==0)
            return {};
        int start=nums[0],end=nums[0];
        vector<string> ans;
        for(int i=1;i<nums.size();i++){
            int x=nums[i];
            if(x==end+1){
                end++;
                continue;
            }
            else if(start==end){
                ans.push_back(to_string(start));
                start=x;
                end=start;
            }
            else{
                string temp=to_string(start)+"->"+to_string(end);
                ans.push_back(temp);
                start=x;
                end=start;
            }
        }
        if(start==end)
            ans.push_back(to_string(start));
        else{
            string temp=to_string(start)+"->"+to_string(end);
            ans.push_back(temp);
        }
        return ans;
    }
};