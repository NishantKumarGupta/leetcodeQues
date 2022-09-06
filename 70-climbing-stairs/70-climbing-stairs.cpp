class Solution {
public://solution 1 top down (recursive dp)
       //solution 2 bottom up (tabulation dp)
        // space optimization

    
    int climbStairs(int n) {
        if(n == 0 || n == 1) return 1;
        
        int secondPrev = 1, prev = 1;
        
        for(int i = 2; i <= n; i++){
            int curr = prev + secondPrev;
            secondPrev = prev;
            prev = curr;
        }
        
        return prev;
    }
};