class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
      int n = nums.size();
    int count = 0;
    int sum =0;
    unordered_map<int,int> mymap;
    for(int i=0;i<n;i++){
        sum += nums[i];
        if(sum == k) count++;
        if(mymap.find(sum-k) != mymap.end()) count += mymap[sum-k];
        mymap[sum]++;
    }
    
    return count;
  
    }
};