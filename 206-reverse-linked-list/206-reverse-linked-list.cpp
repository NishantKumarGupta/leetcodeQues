class Solution {
public: //SFI
    /*
        Method 1: Greedy method (Iterative)
        We will simply traverse the linked list and update the next pointers of the
        nodes to the previous nodes
        TC - O(n) SC - O(1)
    */
    
    //greedy method (Iterative)
    ListNode* reverseList(ListNode* head) {
        ListNode* currNode = head, *prevNode = NULL;
        while(currNode){
            ListNode *nextNode = currNode -> next;
            currNode -> next = prevNode;
            prevNode = currNode;
            currNode = nextNode;
        }
        return prevNode;
    }
};