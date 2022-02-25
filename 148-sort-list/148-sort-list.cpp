class Solution {
public:
    
    ListNode * DivideList(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;
        
        while (fast->next && fast->next->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode *second_list_head = slow->next;
        slow->next = nullptr;
        return second_list_head;
    }
    
    ListNode* sortList(ListNode* head)
    {
        if (!head || !head->next)
        {
            return head;
        }
        
        ListNode *second_list_head =  DivideList(head);
        
        ListNode *head1 = sortList(head);
        ListNode *head2 = sortList(second_list_head);
        
        ListNode *temp_head = new ListNode();
        ListNode *temp = temp_head;
        
        while(head1 && head2)
        {
            if (head1->val < head2->val)
            {
                temp->next = head1;
                head1 = head1->next;
            }
            else
            {
                temp->next = head2;
                head2 = head2->next;
            }
            
            temp = temp->next;
        }
        
        if (head1)
            temp->next = head1;
        else
            temp->next = head2;

        return temp_head->next;
    }
    
};