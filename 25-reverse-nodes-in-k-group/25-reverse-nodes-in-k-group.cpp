class Solution { //SFI
public:
    /*
        Method 1: greedy approach
        We know how to reverse a linked list just do it in groups
        TC- O((n/k)*k) SC - O(1)
    */
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        } else{
            ListNode* temp = head->next;
            ListNode* prev=reverseList(temp);
            temp->next = head;
            head->next = NULL;
            return prev;
        }
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        int count = 1;
        ListNode *temp = head;
        if(temp==NULL || k==1)
            return head;
        while(temp->next!=NULL && count<k){
            temp = temp->next;
            count++;
        }
        if(count==k){
            ListNode *temp1 = reverseKGroup(temp->next,k);
            temp->next = NULL;
            head = reverseList(head);
            temp = head;
            while(temp->next!=NULL){
                temp = temp->next;
            }
            temp->next = temp1;
            return head;
        } else
            return head;

    }
};