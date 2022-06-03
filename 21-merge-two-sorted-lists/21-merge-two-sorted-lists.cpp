class Solution {
public: //SFI
    /*
        Method 1: Two pointer approach
        We compare the current heads of the two linked list and add the smaller one
        to the answer linked list
        TC - O(n) SC - O(1)
    */
    
    //two pointer approach
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1)
            return list2;
        if(!list2)
            return list1;
        ListNode *newHead = (list1 -> val <= list2 -> val) ? list1 : list2;
        if(newHead == list1)
            list1 = list1 -> next;
        else
            list2 = list2 -> next;
        ListNode *itr = newHead;
        
        while(list1 and list2){
            if(list1 -> val <= list2 -> val){
                itr -> next = list1;
                list1 = list1 -> next;
            }
            else{
                itr -> next = list2;
                list2 = list2 -> next;
            }
            itr = itr -> next;
        }
        if(list1){
            while(list1){
                itr -> next = list1;
                itr = itr -> next;
                list1 = list1 -> next;
            }
        }
        if(list2){
            while(list2){
                itr -> next = list2;
                itr = itr -> next;
                list2 = list2 -> next;
            }
        }
        return newHead;
    }
};