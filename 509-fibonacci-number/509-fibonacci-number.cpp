class Solution {
public:// dp sol 1 memoization method
    int fib(int n) {
        //base case
        if(n==1 || n==0)
            return n;
        return fib(n-1)+fib(n-2);
    }
};