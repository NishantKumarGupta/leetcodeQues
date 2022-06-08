class Solution { //SFI
public:
    /*
        Method 1: Floyd's cycle detection
        Basically we take two runner pointers and move one 2 times and the first one one
        place and if they meet there is a cycle in the linked list
        TC - O(n) SC - O(1)
    */
    
    //floyd's cycle detection method
    bool hasCycle(ListNode *head) {
        ListNode *fast = head , *slow = head;
        while(fast and fast -> next){
            fast = fast -> next -> next;
            slow = slow -> next;
            if(fast == slow)
                return true;
        }
        return false;
    }
};