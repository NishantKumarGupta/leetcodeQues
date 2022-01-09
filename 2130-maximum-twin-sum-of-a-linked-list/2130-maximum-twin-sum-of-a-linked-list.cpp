class Solution {
public:
    int pairSum(ListNode* head) {
        int store[100005],n=0,ans=0;
        while(head){
            store[n++]=head->val;
            head=head->next;
        }
        for(int i=0;i<(n/2);i++){
            ans=max(ans,store[i]+store[n-i-1]);
        }
        return ans;
    }
};