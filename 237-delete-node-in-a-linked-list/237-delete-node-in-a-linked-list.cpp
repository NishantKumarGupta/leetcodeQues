class Solution {
public: //SFI
    /*
        Method 1: Brute force approach (Greedy)
        Move the pointers as traversing the linked list and simply update the value of 
        the current node to the next node
        TC- O(n) SC - O(1)
    */
    void deleteNode(ListNode* node) {
        ListNode *prevNode = node;
        while(node and node -> next){
            prevNode = node;
            node = node -> next;
            prevNode -> val = node ->val;
        }
        prevNode -> next = NULL;
    }
};