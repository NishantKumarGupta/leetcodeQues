class Solution { //SFI
public:
    /*
        Method 1: hashmap approach
        So here we basically take a hashmap<node,node> and create the normal copy 
        linked list first then we traverse the linked list one more time and for each
        iteration we check corrosponding copy node for the original node and update
        the random pointer in the copy linked list
        TC - O(1) SC - O(n)
    */
    
    //hashmap method
    Node* copyRandomList(Node* head) {
        Node *mover = head;
        Node *copyHead = NULL, *prev = NULL, *copyMover = NULL;
        map<Node*,Node*> mp;
        while(mover){
            Node *temp = new Node(mover -> val);
            mp[mover] = temp;
            prev = copyMover;
            copyMover = temp;
            if(!copyHead)
                copyHead = copyMover;
            if(prev)
                prev -> next = copyMover;
            mover = mover -> next;
        }
        mover = head;
        copyMover = copyHead;
        while(mover){
            if(!mover -> random)
                copyMover -> random = NULL;
            else{
                copyMover -> random = mp[mover -> random];
            }
            mover = mover -> next;
            copyMover = copyMover -> next;
        }
        return copyHead;
    }
};