class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head -> next == NULL)
            return NULL;
        
        ListNode* slow = head, *fast = head,*prev = head;
        while(fast and fast -> next){ //finding the middle element
            if(slow != head)
                prev = prev ->next;
            fast = fast -> next -> next;
            slow = slow-> next;
        }
        prev -> next = slow -> next; //deleting the middle element
        return head;
    }
};