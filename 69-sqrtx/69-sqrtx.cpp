class Solution {
public:
    int mySqrt(int x) {
        if(x == 1)
            return x;
    
        long long low = 0, high = x/2;
        while(low <= high){
            long long mid = low + (high - low)/2;
            long long num = mid * mid;
            if(num == x)
                return mid;
            else if(num < x)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return high;
    }
};