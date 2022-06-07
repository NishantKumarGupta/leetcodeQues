class Solution {
public: //SFI
    /*
        Method 1: HashMap approach
        We insert every element of nums into an ordered map. and starting from the 
        minimum value we check for the longest consecutive sequence and return it.
        TC - O(nlogn) SC - O(n)
        
        Method 2: Union Find method
        direct question of union find
        TC - O(n) SC - O(n)
        
        Method 3: Optimal HashSet approach
        In this we insert all elements in the hashset and iterate over the array again
        2 cases may arise
        1. current - 1 exist in hashset => do nothing
        2. current - 1 does not exist => find the hashset for the upper values
        TC - O(n) SC - O(n)
    */
    
    //optimal Hashset approach
    int longestConsecutive(vector<int>& nums) {
        int longestStreak = 0;
        unordered_set<int> hashSet;
        for(auto &element:nums)
            hashSet.insert(element);
        
        for(auto &element:nums){
            if(!hashSet.count(element-1)){
                int currentStreak = 1;
                while(hashSet.count(element+1)){
                    element++;
                    currentStreak++;
                }
                longestStreak = max(currentStreak, longestStreak);
            }
        }
        return longestStreak;
    }
};