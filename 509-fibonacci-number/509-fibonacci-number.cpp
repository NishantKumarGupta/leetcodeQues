class Solution {
public:
    int fib(int n) {
        if(n <= 1)
            return n;
        
        int prev = 1, secondPrev = 0;
        for(int i = 2; i <= n; i++){
            int curr = prev + secondPrev;
            secondPrev = prev;
            prev = curr;
        }
        return prev;
    }
};