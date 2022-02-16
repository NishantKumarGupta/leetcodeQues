class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* pre = dummy;
        while(pre->next != NULL and pre->next->next!=NULL ){
            ListNode* curr = pre->next;
            ListNode* frwd = curr->next;
            ListNode* temp = frwd->next;
            pre->next = frwd;
            frwd->next = curr;
            curr->next = temp;
            pre = curr;
        }
        return dummy->next;
    }
};