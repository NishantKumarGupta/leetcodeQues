class Solution { //SFI
public:
    /*
       Method 1: Greedy approach
       Simply keep adding the values of two nodes in the linked list and create
       a new node with that value and traverse both linked lists
       TC - O(n) SC - O(n)
    */
    
    // Greedy approach
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode();
        ListNode *mover = head;
        int carry = 0;
        while(l1 || l2 || carry){
            int sum = 0;
            if(l1){
                sum += l1 -> val;
                l1 = l1 -> next;
            }
            if(l2){
                sum += l2->val;
                l2 = l2 -> next;
            }
            sum += carry;
            carry = sum/10;
            ListNode* nextNode = new ListNode(sum%10);
            mover -> next = nextNode;
            mover = mover -> next;
        }
        return head -> next;
    }
};