/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp=headA,*m1=headA,*m2=headB;
        int l1=0,l2=0;
        while(temp){
            l1++;
            temp=temp->next;
        }
        temp=headB;
        while(temp){
            l2++;
            temp=temp->next;
        }
        if(l1>l2){
            int counter=0;
            while(counter<l1-l2){
                m1=m1->next;
                counter++;
            }
        }
        else if(l2>l1){
            int counter=0;
            while(counter<l2-l1){
                m2=m2->next;
                counter++;
            }
        }
        while(m1){
            if(m1==m2)
                return m1;
            m1=m1->next;
            m2=m2->next;
        }
        return NULL;
    }
};