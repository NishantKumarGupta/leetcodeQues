class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1)
            return true;
        long long low = 1, high = num/2;
        while(low <= high){
            long long mid = low + (high - low)/2;
            long long midSquare = mid * mid;
            if(midSquare == num)
                return true;
            else if(midSquare < num)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return false;
    }
};