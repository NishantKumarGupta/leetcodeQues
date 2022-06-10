class Solution { //SFI
public:
    /*
        Method 1: Greedy vector approach
        In this we simply store all the values in a vector and using a two pointer
        approach check for palindrome
        TC- O(n) SC - O(n)
        
        Method 2: Midpoint approach
        So basically what we do is we find the mid point of the linked list and 
        reverse the linked list after the middle node and then use two pointer
        in the linked list to check for palindrome
        TC - O(n) SC - O(1)
    */
    
    //greedy vector approach
    bool isPalindrome(ListNode* head) {
        ListNode *slow = head, *fast = head;
        if(!head || !head -> next)
            return true;
        
        //finding the middle node of the linked list
        while(fast and fast -> next and fast -> next -> next){
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        
        //now reversing the right half of the linked list
        ListNode *mover = slow -> next, *prev = NULL;
        while(mover){
            ListNode *nextNode = mover -> next;
            mover -> next = prev;
            prev = mover;
            mover = nextNode;
        }
        slow -> next = prev;
        
        //checking for palidrome
        ListNode *dummy = head;
        slow = slow -> next;
        while(slow){
            if(slow -> val != dummy -> val)
                return false;
            dummy = dummy -> next;
            slow = slow -> next;
        }
        return true;
    }
};