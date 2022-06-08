class Solution { //SFI
public:
    /*
        Method 1: Greedy approach
        For every k we take the last node we update its next pointer to the head of the
        linked list and update the previous node next pointer to NULL
        TC - O(n*k) SC - O(1)
        
        Method 2: Finding the last kth last element
        So first of all we do k/n as the linked list will come to its initial state
        after n rotation then we find the previous node to k%n from the end and update 
        its next pointer and the next pointer of the last element of the linked list to 
        head of the linked list
        TC - O(n) SC - O(1)
    */
    
    //finding the last kth element approach
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)
            return head;
        
        int length = 0;
        ListNode *itr = head;
        while(itr){
            length ++;
            itr = itr -> next;
        }
        int rotation = k % length;

        if(!rotation)
            return head;
        ListNode *fast = head, *slow = head;
        while(fast and fast -> next){
            fast = fast -> next;
            if(rotation)
                rotation --;
            else
                slow = slow -> next;
        }
        ListNode *newHead = slow -> next;
        slow -> next = NULL;
        fast -> next = head;
        return newHead;
    }
};