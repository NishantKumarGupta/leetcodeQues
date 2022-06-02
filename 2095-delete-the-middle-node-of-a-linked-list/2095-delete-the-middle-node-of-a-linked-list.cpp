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
    ListNode* deleteMiddle(ListNode* head) {
        int size=0;
        ListNode* slow = head, *fast = head,*prev = head;
        if(head -> next == NULL)
            return NULL;
        while(fast and fast -> next){
            fast = fast -> next -> next;
            slow = slow-> next;
            if(!fast || !fast->next){
                prev-> next = slow ->next;
            }
            prev = prev -> next;
        }
        return head;
    }
};