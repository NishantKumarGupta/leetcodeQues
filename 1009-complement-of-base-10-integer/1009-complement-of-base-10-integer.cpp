class Solution {
public:
    int bitwiseComplement(int n) {
        int ans=1;
        while(ans<n){
            ans<<=1;
            ans |=1;
        }
        return ans^n;
    }
};