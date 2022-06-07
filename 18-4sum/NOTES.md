​
Method 1: Naive Method
Very simple basically just take 4 loops and check if their sum adds to
the target and use hashset to get unique quads
TC - O(n^4) SC - O(1)
Method 2: 3 pointer + Binary Search
In this we first sort the array and use 3 loops and find the 4th element
in the remaining vector using binary search and still use hashset for
unique quads
TC - O(n^3*logn) SC - O(1)
Method 3: 2 + 2 pointer approach
In this we first sort the array and place 2 pointers at start and
use other 2 pointers in the remaining array like standard 2 pointer
approach and find the needed elements. When incrementing we skip the duplicates
in all the loops so we do not require hashset
TC - O(n^3) SC - O(1)