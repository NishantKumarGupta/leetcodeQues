class Solution { //SFI
public: 
    /*
        Method 1: Naive Method
        Very simple basically just take 4 loops and check if their sum adds to 
        the target and use hashset to get unique quads
        TC - O(n^4) SC - O(1)
        
        Method 2: 3 pointer + Binary Search
        In this we first sort the array and use 3 loops and find the 4th element
        in the remaining vector using binary search and still use hashset for
        unique quads
        TC - O(n^3*logn) SC - O(1)
        
        Method 3: 2 + 2 pointer approach
        In this we first sort the array and place 2 pointers at start and 
        use other 2 pointers in the remaining array like standard 2 pointer
        approach and find the needed elements. When incrementing we skip the duplicates
        in all the loops so we do not require hashset
        TC - O(n^3) SC - O(1)
    */
    
    //2 + 2 pointer approach
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i = 0; i < n-3; i++){
            if(i>0 and nums[i] == nums[i-1])
                continue;
            
            for(int j = i+1; j < n-2; j++){
                if(j > i+1 and nums[j] == nums[j-1])
                    continue;
                int low = j+1, high = n - 1;
                int newTarget = target - nums[i] - nums[j];
                while(low < high){
                    if(low > j+1 and nums[low] == nums[low-1]){
                        low++;
                        continue;
                    }
                    if(high < n-1 and nums[high] == nums[high+1]){
                        high--;
                        continue;
                    }
                    int sum = nums[low] + nums[high];
                    if(sum == newTarget){
                        ans.push_back({nums[i],nums[j],nums[low],nums[high]});
                        high--;
                        low++;
                    }
                    else if(sum < newTarget)
                        low++;
                    else
                        high--;
                }
            }
        }
        return ans;
    }
};