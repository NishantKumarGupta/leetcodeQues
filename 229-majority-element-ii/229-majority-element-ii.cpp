class Solution {
public: //SFI
    /*
        Method 1: Sorting method
        By little observation we see that there can be a maximum of 2 of these elements
        So we sort the vector and and run a single pass loop and counting the present
        variable frequency and storing it if it meets the condition
        Tc - O(nlogn) SC - O(1)
        
        Method 2: Hash Map method
        We use a frequency map and traverse the vector and increment the frequency of 
        the current element and if frequency of any number crosses the n/3 mark we store 
        it.
        Tc - O(n) SC - O(n)
        
        Method 3: Moore Voting algorithm (New)
        The intution behind this algo is that there can be a maximum of 2 candidates and
        the frequency of the rest elements will be less than them
        So we take two candidates and if the element and if the present element is 
        equal to our candidate keys than we increment the votes otherwise we decrement
        it.
        Tc - O(n) SC - O(1)
    */
    
    // moore voting algorithm
    vector<int> majorityElement(vector<int>& nums) {
        int candidateA = -1, votesA = 0;
        int candidateB = -1, votesB = 0;
        for(auto &x: nums){
            if(x == candidateA)
                votesA++;
            else if(x == candidateB)
                votesB++;
            else if(votesA == 0){
                candidateA = x;
                votesA = 1;
            }
            else if(votesB == 0){
                candidateB = x;
                votesB = 1;
            }
            else{
                votesA--;
                votesB--;
            }
        }
        int countA = 0, countB = 0;
        for(auto &x: nums){
            if(x == candidateA){
                countA++;
            }
            else if(x == candidateB){
                countB++;
            }
        }
        vector<int> ans;
        if(countA > (int)nums.size()/3)
            ans.push_back(candidateA);
        if(countB > (int)nums.size()/3)
            ans.push_back(candidateB);
        
        return ans;
    }
};