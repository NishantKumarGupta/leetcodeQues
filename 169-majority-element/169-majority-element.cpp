class Solution {
public: //SFI
    /*
        Method 1: Hash Table approach
        Simply traverse the vector and increment the current value in the frequency
        hash table and when frequency of an element crosses the majority line
        we simply return it.
        Tc - O(n) SC - O(n)
        
        Method 2: Moore Voting algorithm
        The intution behind this algorithm is if we have an element with occurance >n/2
        then the rest of elements combined will have occurance of <n/2 thus the other
        elements will never be able to outvote the majority element.
        In this we take an element and if the present element is equal to candidate 
        element we decrease the votes otherwise we increment the votes
        TC O(n) SC - O(1)
    */
    
    //moore voting algo
    int majorityElement(vector<int>& nums) {
        int candidate = -1, votes = 0;
        for(auto &x:nums){
            if(votes == 0)
                candidate = x;
            
            if(candidate == x)
                votes++;
            else
                votes--;
        }
        int count = 0;
        for(auto &element:nums){
            if(element == candidate)
                count++;
            if(count>(int)nums.size()/2)
                return candidate;
        }
        return -1;
    }
};