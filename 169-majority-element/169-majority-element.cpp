class Solution {
public: //SFI
    /*
        Method 1: Hash Table approach
        Simply traverse the vector and increment the current value in the frequency
        hash table and when frequency of an element crosses the majority line
        we simply return it.
        Tc - O(n) SC - O(n)
    */
    
    //hash table approach
    int majorityElement(vector<int>& nums) {
        int majorityLine = nums.size()/2;
        unordered_map<int,int> freqMap;
        for(auto &element: nums){
            freqMap[element]++;
            if(freqMap[element]>majorityLine)
                return element;
        }
        return -1;
    }
};