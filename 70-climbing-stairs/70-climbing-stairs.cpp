class Solution {
public://solution 1 top down (recursive dp)
       //solution 2 bottom up (tabulation dp)
        // space optimization
    
    int climbStairs(int n) {
        vector<int> dp(46, -1);
        if(n == 0 || n == 1)
            return 1;
        int secondLast = 1, last = 1;
        int curr;
        for(int i = 2; i <= n; i++){
            secondLast = last;
            last = curr;
            curr = secondLast + last;
        }
        return curr;
    }
};