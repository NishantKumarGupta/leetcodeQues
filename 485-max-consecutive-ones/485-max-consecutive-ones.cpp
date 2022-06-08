class Solution {
public://SFI
    /*
        Method 1: Greedy approach
        We simply traverse the array and check the max consecutive 1s window
        TC - O(n) SC - O(1)
    */
    
    //greedy approach
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int currentStreak = 0, longestStreak = INT_MIN;
        for(auto &element: nums){
            if(element == 1)
                currentStreak++;
            else
                currentStreak = 0;
            longestStreak = max(currentStreak, longestStreak);
        }
        return longestStreak;
    }
};