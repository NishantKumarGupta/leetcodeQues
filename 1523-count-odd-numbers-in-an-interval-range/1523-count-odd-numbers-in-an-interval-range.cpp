class Solution {
public:
    int countOdds(int low, int high) {
        return low % 2 || high % 2 ? (high - low) / 2 + 1 : (high - low) / 2;
    }
};