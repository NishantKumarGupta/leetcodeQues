class Solution { //SFI
public:
    /*
        Method 1: Greedy vector approach
        In this we simply store all the values in a vector and using a two pointer
        approach check for palindrome
        TC- O(n) SC - O(n)
    */
    
    //greedy vector approach
    bool isPalindrome(ListNode* head) {
        vector<int> values;
        ListNode *mover = head;
        
        while(mover){
            values.push_back(mover -> val);
            mover = mover -> next;
        }
        
        int start = 0, end = values.size()-1;
        while(start < end){
            if(values[start] != values[end])
                return false;
            start ++;
            end --;
        }
        return true;
    }
};