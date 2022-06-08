class Solution { //SFI
public:
    /*
        Method 1: Floyd's cycle detection
        In this we have two pointers and traverse one pointer 2 places and the other
        1 place and if they meet we take the slow pointer at head and move both
        one place at a time, the next time they meet is the node where the cycle
        begins.
        TC - O(n) SC - O(1)
    */
    
    //floyd's cycle detection
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast = head, *slow = head;
        while(fast and fast -> next){
            fast = fast -> next -> next;
            slow = slow -> next;
            if(fast == slow){
                slow = head;
                while(fast != slow){
                    fast = fast -> next;
                    slow = slow -> next;
                }
                return fast;
            }
        }
        return NULL;
    }
};