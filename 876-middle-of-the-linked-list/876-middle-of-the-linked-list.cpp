class Solution {
public: //SFI
    /*
        Method 1: Brute force approach
        We first traverse the whole linked list and find the number of nodes in the
        linked list. Then we traverse once again and stop and the middle of the size
        TC - O(n) SC - O(1)
        
        Method 2: Two Pointer approach/ Slow Fast Pointer appraoch
        We take two pointers and traverse the linked list as fast increments 2 nodes
        at a time and the slow pointer traverses 1 node at a time and when the fast
        pointer reaches the end of the linked list the slow pointer will be at the 
        middle node of the linked list
        TC  - O(n) SC - O(1)
    */
    
    //two pointer approach
    ListNode* middleNode(ListNode* head) {
        ListNode *fast = head , *slow = head;
        while(fast and fast -> next){
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        return slow;
    }
};