class Solution {
public: //SFI
    /*
        Method 1: Brute Force Approach
        We will run 2 loops and find the indices whose values sums up to the target value
        Tc - O(n^2) SC - O(1)
        
        Method 2: Sorting + Two pointer approach
        Create another array to store the value and indice as a pair and then we sort
        this array according to values. Take two pointers one at start and one at end of
        the array sum the two values. Three situations will arise
        1. if sum == target return indices
        2. if sum < target increment the low pointer
        3. if sum > target decrement the high pointer
        Tc - O(nlogn) SC - O(1)
        
        Method 3: Hash Map approach
        Use a hash map. At every element we check the hash map for the value 
        (target-element) and if present we will simply return it and if it is not present
        we insert the current element into the hash map.
        TC - O(n) SC - O(n)
    */
    
    //using hashmap approach
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0; i<nums.size(); i++){
            int newTarget = target - nums[i];
            if(mp.find(newTarget) == mp.end()){
                mp[nums[i]] = i;
                continue;
            }
            return {i,mp[newTarget]};
        }
        return {-1,-1};
    }
};