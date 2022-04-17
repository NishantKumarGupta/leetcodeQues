class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start=1,end=nums.size();
        int ansPossible=false;
        while(start<=end){
            int mid=start+(end-start)/2;
            int win=0;
            for(int i=0;i<mid;i++){
                win+=nums[i];
            }
            int maxWin=win;
            for(int i=mid;i<nums.size();i++){
                win+=nums[i];
                win-=nums[i-mid];
                maxWin=max(maxWin,win);
            }
            if(maxWin>=target){
                ansPossible=mid;
                end=mid-1;
            }
            else
                start=mid+1;

        }
        return ansPossible;
    }
};