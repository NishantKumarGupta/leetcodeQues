/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    //////////////Iterative
    // ListNode* reverseList(ListNode* head) {
    //     ListNode *prevNode = NULL;
    //     while(head != NULL){
    //         ListNode *nextNode = head -> next;
    //         head -> next = prevNode;
    //         prevNode = head;
    //         head = nextNode;
    //     }
    //     return prevNode;
    // }
    
    /////////////Recursive
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head -> next == NULL)
            return head;
        
        ListNode *newHead = reverseList(head -> next);
        head -> next -> next = head;
        head -> next = NULL;
        
        return newHead;
    }
};