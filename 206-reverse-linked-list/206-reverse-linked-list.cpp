class Solution {
public: //SFI
    /*
        Method 1: Greedy method
        We will simply traverse the linked list and update the next pointers of the
        nodes to the previous nodes
        TC - O(n) SC - O(1)
    */
    
    //greedy method
    ListNode* reverseList(ListNode* head) {
        ListNode* currNode = head, *prevNode = NULL;
        while(currNode){
            ListNode *tempNode = currNode -> next;
            currNode -> next = prevNode;
            prevNode = currNode;
            currNode = tempNode;
        }
        return prevNode;
    }
};