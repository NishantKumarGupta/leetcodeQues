class Solution {
public: //SFI
    /*
        Method 1: Two pointer approach
        We compare the current heads of the two linked list and add the smaller one
        to the answer linked list
        TC - O(n) SC - O(1)
        
        Method 2: Using recursion (shorter & cleaner code)
        We call the function recursively to update the next pointer of the current
        node
        TC - O(n) SC - O(1)
    */
    
    //recursive approach
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1)
            return list2;
        if(!list2)
            return list1;
        if(list1 -> val <= list2 -> val){
            list1 -> next = mergeTwoLists(list1 -> next, list2);
            return list1;
        } 
        else{
            list2 -> next = mergeTwoLists(list1 , list2 -> next);
            return list2;
        }
    }
};