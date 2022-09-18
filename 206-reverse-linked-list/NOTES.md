SFI
​
2 methods
1. Iterative method
In this we take a prev node and initialise it with NULL. now we iterate till head is not null
and with every iteration we update the next pointer of head to prev and update prev and
head to point to their next nodes respectively.
​
2. Recursive method
In this we try to return the last node of the linked list by recursively calling for it and with
every recursive call we update the next pointer of the next node of head to point to head
and head's next pointer to point at NULL and return the last node pointer.