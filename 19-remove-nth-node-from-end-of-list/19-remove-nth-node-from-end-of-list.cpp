class Solution { 
public: //SFI
    /*
        Method 1: Brute force/ Greedy Approach
        In this we traverse the linked list and find out the size of it and subtract
        from it 'n' to get the position we need to go and delete the node
        TC - O(n) SC - O(1)
        
        Method 2: Two pointer approach
        In this we move the slow pointer with the fast pointer with a delay of 'n'
        steps
        TC - O(n) SC- O(1)
    */
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *slow = head, *fast = head;
        while(fast and fast -> next){
            fast = fast -> next;
            if(n)
                n--;
            else
                slow = slow -> next;
        }
        if(slow == head){
            if(n)
                head = head -> next;
            
            else
                slow -> next = slow -> next -> next;
               
        }
        else if(slow -> next)
            slow -> next = slow -> next -> next;
        else
            delete slow -> next;
        
        return head;
    }
};