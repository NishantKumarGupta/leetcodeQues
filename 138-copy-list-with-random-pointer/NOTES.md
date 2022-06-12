Method 1: hashmap approach
So here we basically take a hashmap<node,node> and create the normal copy
linked list first then we traverse the linked list one more time and for each
iteration we check corrosponding copy node for the original node and update
the random pointer in the copy linked list
TC - O(n) SC - O(n)
Method 2: optimal approach
we create the new node and update the current node next to point at the new node
and the new node next to point at the original next node. then we update the
random pointers using next and then finally break the linked list into two
to get the copy linked list.
TC - O(n) SC - O(1)